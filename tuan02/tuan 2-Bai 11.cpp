#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int min,max,step_size,i;
	double b,c;
	cin >> min >> max >> step_size;
	i = min;
	do
	{
		b = (i-32)*5/9;
		c = b+273.15;
		printf("%d %0.2lf %0.2lf \n", i, b, c);
		i = i+step_size;
	}while(i<=max);
	return 0;
}
