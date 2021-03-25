#include<iostream>
#include<cstring>
using namespace std;
int n,i,k;
string s;
string sochu(int n)
{
	s[0] = 97;
for(int i=1;i<n;i++)
s[i] = s[i-1]+1;
return s;
}
int Bool[100] = {0};
char a[100];
void inra()
{
	for(int i=0;i<k;i++)
	cout<<a[i];
	cout<<endl;
}
void f(int m)
{
	for(int i=0;i<n;i++)
	{
		if(Bool[i]==0)
		{
			a[m] = s[i];
			Bool[i] = 1;
			if(m==k-1)
			inra();
			else
			f(m+1);
			Bool[i] = 0;
		}
		
	}
}
int main()
{
	cout<<"nhap n,k:";
	cin>>n>>k;
	sochu(n);
	f(0);
	return 0;
}

