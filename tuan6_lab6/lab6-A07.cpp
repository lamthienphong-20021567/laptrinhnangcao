#include<iostream>
#include<cstring>
using namespace std;
int Bool[100] = {0};
char a[100];
void inra(int len)
{
	for(int i=0;i<len;i++)
	cout<<a[i];
	cout<<endl;
}
void f(int m,int len,string s)
{
	for(int i=0;i<len;i++)
	{
		if(Bool[i]==0)
		{
			a[m] = s[i];
			Bool[i] = 1;
			if(m==len-1)
			inra(len);
			else
			f(m+1,len,s);
			Bool[i] = 0;
		}
		
	}
}
int main()
{
	string s;
	getline(cin,s);
	int len = s.length();
	f(0,len,s);
}
