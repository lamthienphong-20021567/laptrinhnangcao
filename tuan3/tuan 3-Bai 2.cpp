#include<iostream>
using namespace std;
int main()
{
	int n,a[n],tongchan = 0,sole = 0;
	cout << "nhap n:" ;cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]%2==0) tongchan = tongchan +a[i];
		else sole = sole +1;
	}
	int max = a[0];
	int min = a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i]) max = a[i];
		if(min>a[i]) min = a[i];
	}
	cout << "phan tu lon nhat la:" << max <<endl;
	cout << "phan tu nho nhat la:" << min << endl;
	cout << "tong cac ptu chan la:"<< tongchan <<endl;
	cout << "so phan tu le la:" << sole << endl;
	return 0; 
}
