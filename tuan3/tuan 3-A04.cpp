#include<iostream>
using namespace std;
int main()
{
	int a[5] = {1,2,3,4,5};
	//cout << a[-1] << a[5] < a[6];khong in ra duoc
	a[-1] = 6;
	a[5] = 7;
	a[6] = 8;
	cout << a[-1] <<"\t"<<a[5]<<"\t"<<a[6];
}
