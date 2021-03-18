#include<iostream>
using namespace std;
int main()
{
// a;
	int a=5;
	int &b = a;
	b++;
	cout<<a<<endl;
// b;
	//int &c; khong the khai bao tham chieu ma chua chieu toi 1 bien.
// c
	int c=8;
	int &d=a;
	d = c;c++;
	cout<<d;//khi khai bao %d=c chuing trinh bao loi.
	       //khi khai bao d=c.thi d co gia tri la 8 va khong doi khi c++, d thay doi khi doi c++ thanh d++.
	return 0;
	
}
