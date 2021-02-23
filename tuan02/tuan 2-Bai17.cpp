#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,e,s,tb;
	cout << "nhap diem mon 1:";cin >> a;
	cout << "nhap diem mon 2:";cin >> b;
	cout << "nhap diem mon 3:";cin >> c;
	cout << "nhap diem mon 4:";cin >> d;
	cout << "nhap diem mon 5:";cin >> e;
	s = a+b+c+d+e;
	tb = s/5;
	cout << "diem trung binh 5 mon hoc la: " << tb;
	return 0;
}
