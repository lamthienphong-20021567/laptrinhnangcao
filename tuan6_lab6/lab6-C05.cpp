#include<iostream>
#include<cmath>
using namespace std;
void xuatmang(int k,int a[100])
{
	for(int i=k;i>=1;i--)
	cout<<a[i]<<"\t";
}
void tinh(int i,int a[100],int t[100],int n)
{
	int j;
	for(int j=a[i-1];j<=(n-t[i-1]);j++)
	{
		a[i] = j;
		t[i] = t[i-1]+j;
		if(t[i]==n) {
		xuatmang(i,a);cout<<"\n";}
		else  tinh(i+1,a,t,n);
	}
}
int main()
{
int n;
cout<<"nhap n:";
cin>>n;
int a[100],t[100];
a[0] = 1;
t[0] = 0;
tinh(1,a,t,n);
return 0;	
}
