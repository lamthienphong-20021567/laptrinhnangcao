#include<iostream>
using namespace std;
int main()
{
	int n,ths = 0;;
	double a[n],b[n],s = 0,tb;
	cout << "nhap so mon hoc can tinh DTB: ";cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << "diem mon " << i+1 << ": ";cin >> a[i];
		if(a[i]>10||a[i]<0)
		{
			cout << "diem nhap khong hop le, yeu cau nhap lai trong khoang 0..10 
			: ";cin>>a[i];
		}
		cout <<" he so mon hoc " << i+1 << ": ";cin>> b[i];
		if(b[i]!=1&&b[1]!=1.5&&b[i]!=2&&b[i]!=2.5&&b[i]!=3)
		{
			cout << "nhap lai he so mon " << i+1 <<": ";cin >> b[i];
		 } 
		 ths = ths+b[i];
	}
	for(int i=0;i<n;i++)
	{
		s = s+a[i]*b[i];
	}
	tb = s/ths;
	cout << "so mon hoc: " << n <<endl;
	cout << "tong he so: " << ths << endl;
	cout << "diem trung binh cua " << n << " mon hoc la: " << tb;
	return 0;
	
}
