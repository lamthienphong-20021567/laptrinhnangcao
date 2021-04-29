#include<iostream>
#include "fraction.h"
using namespace std;
int main()
{
	Fraction a(4,5),b(5,6);
	a.print();cout<<endl;
	Fraction sum = a+b;
	Fraction hieu = a-b;
	Fraction nhan = a*b;
	Fraction thuong = a/b;
	cout<<"tong, hieu ,tich, thuong lan luot la:"<<endl;
	sum.print();cout<<endl;
	hieu.print();cout<<endl;
	nhan.print();cout<<endl;
	thuong.print();cout<<endl;
	return 0;
}
