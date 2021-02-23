#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x,y,kc;
	cout << "nhap x: ";
	cin >> x;
	cout << " nhap y: ";
	cin >> y;
	kc = sqrt(x*x+y*y);
	cout << "khoang cach la:  " << kc;
	return 0;
	
}
