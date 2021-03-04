#include<iostream>
using namespace std;
int main()
{
	int n,a[n],result = 0;
	cout<<"nhap n:";cin >> n;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				result = 1;
				break;
			}
		}
	}
	if(result==1) cout << "yes";
	else cout << "no";
}
