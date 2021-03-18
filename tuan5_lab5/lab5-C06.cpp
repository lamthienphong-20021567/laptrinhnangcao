#include<iostream>
using namespace std;
int ucln(int m, int n)//dung de quy
{
	if(m==n) return m;
	if(m>n) return ucln(m-n,n);
	if(m<n) return ucln(m,n-m);
}
int main()
{
	int a,b;
	cout<<"nhap a:";cin>>a;
	cout<<"nhap b:";cin>>b;
	cout<<"ucln cau a va b la:"<<ucln(a,b)<<endl;
	if(ucln(a,b)==1) cout<<a<<","<<b<<" la 2 snt cung nhau";
	else cout<<a<<","<<b<<" la 2 snt ko cung nhau";
	return 0;
}
