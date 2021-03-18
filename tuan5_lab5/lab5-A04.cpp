#include<iostream>
#include<cstring>
using namespace std;
void tong(string s,int a[],int n)
{
	string s1;
	int l = s.length();
	for(int i=l-1;i>=0;i--)
	s1 = s1+s[i];
	cout<<"s1 = "<<s1<<endl;
	for(int i=n-1;i>=0;i--)
	cout<<a[i]<<"\t";
	
}
void tong2(string &s,int a[], int n)
{
	string s2;
	int l = s.length();
	for(int i=l-1;i>=0;i--)
	s2 = s2+s[i];
	cout<<"s2 = "<<s2<<endl;
	int *p;
	p = a;
	for(int i=n-1;i>=0;i--)
	cout<<*(p+i)<<"\t";
}
int main()
{
	int n,a[100];
	cout<<"n=";cin>>n;
	cout<<"nhap mang a:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"s=";
	string s;
	cin.ignore();
	getline(cin, s);
	tong(s,a,n);
	tong2(s,a,n);
	return 0;
}
// mang duoc truyen vao trong ham khong the truyen theo gia tri.
// string khi truyen vao ham co the dung theo ca 2 cach, truyen ca string vao .
