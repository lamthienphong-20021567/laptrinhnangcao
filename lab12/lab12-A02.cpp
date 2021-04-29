#include<iostream>
#include<assert.h>
using namespace std;
int ucln(int a,int b)
{
	int min,max,u;
	if(a>=b) {
	min = b;max = a;}
	else {
	min  = a;max = b;}
	for(int i=min;i>=1;i--)
	{
		if(max%i==0&&min%i==0)
		{
			u = i;
			break;
		}
	}
	return u;
}
class Fraction
{
	private:
	int num,den;
	friend Fraction get_max(Fraction a,Fraction b);
	public:
		Fraction(int,int);
		void print();
		Fraction operator+(Fraction a);
		Fraction operator-(Fraction a);
		Fraction operator*(Fraction a);
		Fraction operator/(Fraction a);
		Fraction toigian(Fraction a);
	};
Fraction Fraction::toigian(Fraction a)
{
	int t = ucln(a.num,a.den);
	a.num = a.num/t;
	a.den = a.den/t;
	return a;
}
Fraction Fraction::operator+(Fraction a)
{
	Fraction sum(num,den);
	assert(den!=0);
	assert(sum.den!=0);
	assert(a.den!=0);
	if(den==a.den)
	{
		sum.num = num+a.num;
	}
	else
	{
		sum.num = num*a.den+den*a.num;
		sum.den =sum.den*a.den;
	}
	toigian(sum);
	return sum;
}
Fraction Fraction::operator-(Fraction a)
{
	Fraction hieu(num,den);
	assert(hieu.den!=0);
	assert(a.den!=0);
	if(den==a.den)
	{
		hieu.num = num-a.num;
	}
	else
	{
		hieu.num = num*a.den-den*a.num;
		hieu.den = den*a.den;
	}
	toigian(hieu);
	return hieu;
}
Fraction Fraction::operator*(Fraction a)
{
	assert(a.den!=0);
	Fraction nhan(num*a.num,den*a.den);
	assert(nhan.den!=0);
	toigian(nhan);
	return nhan;
}
Fraction Fraction::operator/(Fraction a)
{
	assert(a.den!=0);
	Fraction thuong(num*a.den,den*a.num);
	assert(thuong.den!=0);
	toigian(thuong);
	return thuong;
}
Fraction::Fraction(int x,int y)
{
	num = x;
	den = y;
}
void Fraction::print()
{
	cout<<num<<"/"<<den;
}
Fraction get_max(Fraction a,Fraction b)
{
	if(a.den==b.den)
	{
		if(a.num>=b.num) 
			return a.toigian(a);
		else
	   return b.toigian(b);
	}
	else
	{
		int t = (a.den*b.den)/ucln(a.den,b.den);
		a.num = a.num*(t/a.den);
		b.num = b.num*(t/b.den);
		a.den = t;
		b.den = t;
		get_max(a,b);
	}
}
int main()
{
	Fraction a(4,5),b(5,6);
	a.print();cout<<endl;
	Fraction sum = a+b;
	Fraction hieu = a-b;
	Fraction nhan = a*b;
	Fraction thuong = a/b;
	cout<<"tong, hieu ,tich, thuong lan luot la:"<<endl;
	sum.print();cout<<endl;
	hieu.print();cout<<endl;
	nhan.print();cout<<endl;
	thuong.print();cout<<endl;
	Fraction max = get_max(a,b);
	cout<<"max = ";max.print();
	return 0;
}
