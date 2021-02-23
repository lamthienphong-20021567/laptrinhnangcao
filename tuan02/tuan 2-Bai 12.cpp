#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,b;
	cout << "nhap n:";cin >> n;
	b = (int)sqrt(n);
	if(b*b==n) cout << "n la so chinh phuong";
	else cout << "n khong la so chinh phuong";
	return 0;
}
