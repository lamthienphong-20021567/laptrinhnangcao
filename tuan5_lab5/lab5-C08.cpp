#include<iostream>
#include<cmath>
using namespace std;
void rnd(double a)
{
	int b,c;
	b = ceil(a);
	c = floor(a);
	cout<<"so sau khi lam tron len la:"<<b<<endl;
	cout<<"so sau khi lam tron xuong la:"<<c<<endl;
}
void rnd01(double a)
{
	int b = (int)a;
	int c;
	if(a-b>=0.5) c = b+1;
	else c = b;
	cout<<"khong su dung ceil/floor, ta duoc"<<c;
}
int main()
{
	double a;
	cin>>a;
	rnd(a);
	rnd01(a);
	return 0;
}
