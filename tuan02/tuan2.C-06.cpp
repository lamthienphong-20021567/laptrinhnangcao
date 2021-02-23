#include<iostream>
using namespace std;
int main()
{
	int n,a[100][100],b[100][100];
	cout << "nhap n:";cin >> n;
	for(int i=0;i<n;i++)
	a[0][i] = i+1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		    {
			  a[i][j] = a[i-1][j+1];
		    }
	}
	for(int i=1;i<n;i++)
	{
		int k=0;
		for(int j=n-i;j<n;j++)
		{
		  a[i][j] = a[0][k];k++;}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

}
