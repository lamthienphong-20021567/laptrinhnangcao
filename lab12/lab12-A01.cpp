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
	public:
		Fraction(int,int);
		void print();
		Fraction operator+(Fraction a);
		Fraction operator-(Fraction a);
		Fraction operator*(Fraction a);
		Fraction operator/(Fraction a);
	};
Fraction Fraction::operator+(Fraction a)
{
	assert(a.den!=0);
	if(this->den==a.den)
	{
		this->num= this->num+a.num;
	}
	else
	{
		this->num = this->num*a.den+this->den*a.num;
		this->den = this->den*a.den;
	}
	int u = ucln(this->num,this->den);
	this->num =this->num/u;
	this->den = this->den/u;
	return *this;
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
	int u = ucln(hieu.num,hieu.den);
	hieu.num = hieu.num/u;
	hieu.den = hieu.den/u;
	return hieu;
}
Fraction Fraction::operator*(Fraction a)
{
	assert(a.den!=0);
	Fraction nhan(num*a.num,den*a.den);
	assert(nhan.den!=0);
	int u = ucln(nhan.num,nhan.den);
    nhan.num = nhan.num/u;
	nhan.den = nhan.den/u;
	return nhan;
}
Fraction Fraction::operator/(Fraction a)
{
	assert(a.den!=0);
	Fraction thuong(num*a.den,den*a.num);
	assert(thuong.den!=0);
	int u = ucln(thuong.num,thuong.den);
	thuong.num =thuong.num/u;
	thuong.den =thuong.den/u;
	return thuong;
}
Fraction::Fraction(int x,int y)
{
	this->num = x;
	this->den = y;
}
void Fraction::print()
{
	cout<<num<<"/"<<den;
}
int main()
{
	Fraction a(4,5),b(5,6),f1(1,2),f2(1,1);
	a.print();cout<<endl;
	Fraction sum = f1+f2+f1;
	Fraction hieu = a-b;
	Fraction nhan = a*b;
	Fraction thuong = a/b;
	cout<<"tong, hieu ,tich, thuong lan luot la:"<<endl;
	sum.print();cout<<endl;
	hieu.print();cout<<endl;
	nhan.print();cout<<endl;
	thuong.print();cout<<endl;
	return 0;
}
// sum=f1+f2+f1 thi luc dau cong f1,f2 truoc luc do
// f1 = f1+f2, roi cong them f1 tuc la sum=2(f1+f2);
