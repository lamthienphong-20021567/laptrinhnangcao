#include<iostream>
#include<cstring>
using namespace std;
int n,i,k;
string s;
char a[100];
int x[100];
string sochu(int n)
{
	s[0] = 97;
for(int i=1;i<n;i++)
s[i] = s[i-1]+1;
return s;
}
void inra()
{
	cout<<"{ ";
	for(int i=0;i<k;i++)
	cout<<a[i]<<" ";
	cout<<" };";
	cout<<endl;
}
void f(int i)
{
	for(int j=x[i-1]+1;j<=n-k+i;j++)
	{
		x[i] = j;
	a[i-1] = s[j-1];
	if(i==k) 
	inra();
	else 
	f(i+1);}
}
int main()
{
	cout<<"nhap n lon hon k:";
	cin>>n>>k;
	sochu(n);
	x[0] = 0;
	f(1);
	return 0;
}
