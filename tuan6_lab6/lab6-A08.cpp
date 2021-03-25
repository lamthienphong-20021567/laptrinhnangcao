#include<iostream>
using namespace std;
void tapcon(int i,int m,int n,int a[100])
{
	int k;
	for(int k = a[i-1]+1;k<=n;k++)
	{
	a[i] = k;
	if(i==m)
	{
		int temp;cout<<"{ ";
		for(int temp=1;temp<=m;temp++)
		{
			cout<<a[temp]<<" ";
		}
		cout<<" }\n";
	}
	else tapcon(i+1,m,n,a);}
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	a[0] = 0;
	int i;
	for(int i=1;i<=n;i++)
	{
		cout<<"tap con co "<<i<<" phan tu la:\n";
		tapcon(1,i,n,a);
		cout<<"\n";
	}
	return 0;
}
