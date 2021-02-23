#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double b,c;
	int a;
	cin >> a;
	b = (a-32)*5/9;
	c = b+273.15;
	printf("%d %0.2lf %0.2lf", a, b, c);
	return 0;
}
