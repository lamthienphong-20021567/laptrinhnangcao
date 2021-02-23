#include<iostream>
#include<cmath>
using namespace std;
int tonguoc(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s = s+i;
	}
	if(s==n) return 1;
	else return 0;
}
int kiemtrasnt(int n)
{
	int result =0;
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			result = 1;
			break;
		}
	}
	if(result==0||n==2)
	return 1;
	else return 0;
}
int kiemtracp(int n)
{
	int a = (int) sqrt(n);
	if(a*a==n) return 1;
	else return 0;
}
int main()
{
	int n;
	cout << "nhap n:";cin >> n;
	cout << " cac so hoan hao tu 2 toi n la:";
	for(int i=2;i<=n;i++)
	{
		if(tonguoc(i)==1) 
		cout << i << " ";
	}
	cout << "\ncac snt tu 2 toi n la:";
	for(int i=2;i<=n;i++)
	{
		if(kiemtrasnt(i)==1)
		cout << i << " ";
	}
cout <<"\ncac so cp tu 2 toi n la:";
  for(int i=2;i<=n;i++)
  {
  	if(kiemtracp(i)==1) cout << i <<" ";
  }
  return 0;
 
	
}
