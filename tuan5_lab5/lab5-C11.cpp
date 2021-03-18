#include<iostream>
#include<cmath>
using namespace std;
void doicoso(int n)
{
	int a[1000],chuso,i=0,b=0;
	while(n!=0)
	{
		chuso = n%2;
		n = n/2;
		a[i] = chuso;
		i++;
		b++;
	}
	for(int i=b-1;i>=0;i--)
	cout<<a[i];
	
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	cout<<"so doi sang co so 2 la:";
	doicoso(n);
	return 0;
}
