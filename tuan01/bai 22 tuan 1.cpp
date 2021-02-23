#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double w,h,b;
	cout << "nhap vao can nang:";
	cin >> w;
	cout << "nhap vao chieu cao:";
	cin >> h;
	b = w/(h*h);
	cout << "chi so BMI la: " << b;
}
