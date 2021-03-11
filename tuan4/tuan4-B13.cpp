#include<iostream>
using namespace std;
int tongtruoc(int i, int n,int a[])
{
	int s = 0;
	if(i==0) s = 0;
	for(int j=i-1;j>=0;j--)
	{
	     s = s+a[j];
	}
	return s;
}
int tongsau(int i, int n, int a[])
{
	int s = 0;
	if(i==n-1) s = 0;
	for(int j=i+1;j<n;j++)
	s = s+a[j];
	return s;
}
int main()
{
	int k,n,a[100],result = 0;
	cin >> k;
	int test = 1;
	while(test<=k)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++)
		{
			if(tongtruoc(i,n,a)==tongsau(i,n,a))
			{
				result = 1;
				break;
			}
		}
		if(result==1) cout<<"YES";
		else cout<<"NO";
		test++;
	}
	return 0;
}
