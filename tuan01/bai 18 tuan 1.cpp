#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1,x2,y1,y2,kc;
	cout << "nhap toa do 1:";
	cin >> x1 >> y1;
	cout << "nhap toa do 2:";
	cin >> x2 >> y2;
	kc = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout << "khoang cach la: " << kc;	
	
} 
