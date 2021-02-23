#include<iostream>
using namespace std;
int main()
{
	double a,b,c,a1,b1,c1,x,y;
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	double t = a/a1,tb = b/b1,tc = c/c1;
	if(t!=tb)
	{
		x = (b1*c-c1*b)/(a*b1-a1*b);
		y = (c-a*x)/b;
		cout << "he phuong trinh co nghiem duy nhat:" <<"x = " << x << " y = "<< y <<endl;
	}
	if(t==tb&&tb!=tc) cout << "he phuong trinh vo nghiem.";
	if(t==tb&&tb==tc) cout << " he phuong trinh co vo so nghiem.";
	return 0;
}
