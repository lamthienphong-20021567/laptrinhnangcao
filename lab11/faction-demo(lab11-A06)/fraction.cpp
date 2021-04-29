#include "fraction.h"
#include<iostream>
#include<assert.h>
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
Fraction Fraction::operator+(Fraction a)
{
	Fraction sum(num,den);
	assert(sum.den!=0);
	assert(a.den!=0);
	if(sum.den==a.den)
	{
		sum.num = sum.num+a.num;
	}
	else
	{
		sum.num = sum.num*a.den+sum.den*a.num;
		sum.den = sum.den*a.den;
	}
	int u = ucln(sum.num,sum.den);
	sum.num = sum.num/u;
	sum.den = sum.den/u;
	return sum;
}
Fraction Fraction::operator-(Fraction a)
{
	Fraction hieu(num,den);
	assert(hieu.den!=0);
	assert(a.den!=0);
	if(hieu.den==a.den)
	{
		hieu.num = hieu.num-a.num;
	}
	else
	{
		hieu.num = hieu.num*a.den-hieu.den*a.num;
		hieu.den = hieu.den*a.den;
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
	num = x;
	den = y;
}
void Fraction::print()
{
	std::cout<<num<<"/"<<den;
}
