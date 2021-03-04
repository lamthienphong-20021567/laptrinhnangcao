#include<iostream>
using namespace std;
int main()
{
	int n,a[100][100];
	cout << "nhap n: ";cin >> n;
	for(int i=0;i<n;i++)
	a[i][0] = 1;
	a[1][1] = 1;
	for(int i=2;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		a[i][j] = a[i-1][j-1]+a[i-1][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		cout << a[i][j] <<"\t";
		cout << "\n";
	}
	return 0;
}
