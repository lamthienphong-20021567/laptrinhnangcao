#include<iostream>
using namespace std;
void tamgiac(int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((j>m+i)||(j<m-i)) cout<<" ";
			if((j>=m-i&&j<=m+i)) cout<<"*";
		}
		cout<<"\n";
	}
}
int main()
{
	int m,n;
	cout<<"nhap m:";cin>>m;
	tamgiac(m,2*m);
	return 0;
}
