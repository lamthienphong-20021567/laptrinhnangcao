#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,max;
	cout << "nhap 2 so nguyen:";
	cin >> a >> b;
	max = ((a+b)+abs(a-b))/2;
	cout << "so lon nhat la:" << max;
	return 0;
}
