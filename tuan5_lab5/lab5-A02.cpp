#include<iostream>
using namespace std;
int luythua(int n)
{
	if(n==0) return 1;
	else return luythua(n-1)*n;
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	int x = 10;cout<<"x = "<<x<<endl;
	cout<<n<<"! = "<<luythua(n)<<endl;
	cout<<x<<"! = "<<luythua(x)<<endl;
	return 0;
}
