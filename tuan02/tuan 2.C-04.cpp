#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";cin >> n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<n+i;j++)
		{
			if(j<n-i+1) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
