#include<iostream>
using namespace std;
int* dem()
{
	int k = 5;
	int *p = &k;
	delete p;
	return p;
}
int main()
{
	cout<<dem;
}
// loi gia tri cua p khac gia tri bien dia phuong
