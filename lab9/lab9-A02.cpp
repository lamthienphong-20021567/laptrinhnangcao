#include<iostream>
using namespace std;
int main()
{
	int* p = new int;
int* p2 = p;
*p = 10;
// delete p; dung delete o giua chuong trinh
cout << *p2;
delete p2;
}
