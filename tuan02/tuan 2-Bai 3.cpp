#include<iostream>
using namespace std;
int main()
{
	int a,b,c,cv;
	cout << "nhap vao do dai 3 canh:";cin >> a >> b >> c;
	if(a+b<=c||b+c<=a||c+a<=b) cout << "khong la tam giac";
	if(a+b>c&&a+c>b&&b+c>a)
	{
		cv = a+b+c;
		cout << "chu vi tam giac la:" << cv <<endl;
		if(a==b&&b==c) cout << "tam giac deu";
	    else if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b) )cout << "tam giac can";
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a)) cout << "tam giac vuong";
		else cout << "tam giac thuong";
	}
	return 0;
}
