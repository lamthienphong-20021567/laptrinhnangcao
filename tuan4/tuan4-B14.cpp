#include<iostream>
using namespace std;
int main()
{
	int n,a[1000],b[1000],c[1000];
	cin >> n;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n+1;i++)
	{
		cin >> b[i];
		c[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(a[i]==b[j])
				c[j] = c[j]+1;
		}
	}
	for(int i=0;i<n+1;i++)
	{
		if(c[i]==0) cout<<b[i]<<"\t";
	}
	return 0;
}
