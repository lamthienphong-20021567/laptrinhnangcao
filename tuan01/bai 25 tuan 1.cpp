#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout << "nhap cac gia tri:";
	for(int i=0;i<5;i++)
	cin >> a[i];
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "so lon thu 3 la:" << a[2];
	return 0;
	
}
