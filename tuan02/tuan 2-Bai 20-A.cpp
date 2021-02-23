#include<iostream>
using namespace std;
int main()
{
	int n,tien;
	cout << "so gio lam viec: ";cin >> n;
	if(n<=150) tien = 100*12000+(n-100)*16000;
	if(n>150&&n<=200) tien = 100*12000+50*16000+(n-150)*20000;
	if(n>200) tien = 100*12000+50*16000+50*20000+(n-200)*25000;
	cout << "tien luong cua thang la: " << tien;
	return 0;
}
