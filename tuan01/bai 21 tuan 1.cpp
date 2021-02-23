#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	double s,dt;
	cout << " do dai 3 canh tam giac la:";
	cin >> a >> b >> c;
	if(a+b<=c||b+c<=a||a+c<=b)
	cout << " khong phai la tam giac";
	else
	{
		s = (double)(a+b+c)/2;
		dt = sqrt(s*(s-a)*(s-b)*(s-c));
		cout << "dien tich cua tam giac la: " << dt;
	}
}
