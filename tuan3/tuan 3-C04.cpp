#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,n;
	char a[1000][1000];
	cin >> m >> n;
	fflush(stdin);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin >> a[i][j];
	}
	cout << "\n";cout << "bai min:" <<"\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cout << a[i][j] <<"\t";
		cout << "\n";
	}
	cout << "\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	     {
	     	char dem[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	     	int k = 0;
	     	if(a[i][j]!='*')
	     	{
	     		if(a[i-1][j-1]=='*') k++;
	     		if(a[i-1][j]=='*') k++;
	     		if(a[i-1][j+1]=='*') k++;
	     		if(a[i][j-1]=='*') k++;
	     		if(a[i][j+1]=='*') k++;
	     		if(a[i+1][j-1]=='*') k++;
	     		if(a[i+1][j]=='*') k++;
	     		if(a[i+1][j+1]=='*') k++;
	     		a[i][j] = dem[k];
			 }
		 }
	}
	cout << "bai min sau do la:\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cout << a[i][j] << "\t";
		cout << "\n";
	}
}
