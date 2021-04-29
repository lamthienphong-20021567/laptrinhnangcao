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
class Fraction
{
	private:
	int num,den;
	friend std::ostream& operator<< (std::ostream &out, const Fraction &a);
	public:
		Fraction(int,int);
		void print();
		Fraction operator+(Fraction a);
		Fraction operator-(Fraction a);
		Fraction operator*(Fraction a);
		Fraction operator/(Fraction a);
		Fraction toigian(Fraction a);
	};
std::ostream& operator<< (std::ostream &out, const Fraction &a)
	{
		out<<a.num<<"/"<<a.den;
		return out;
	}
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

int main()
{
	Fraction a(4,5),b(5,6);
	std::cout<<a<<" "<<b<<"\n";
	Fraction sum = a+b;
	Fraction hieu = a-b;
	Fraction nhan = a*b;
	Fraction thuong = a/b;
	std::cout<<"tong, hieu ,tich, thuong lan luot la:"<<"\n";
	std::cout<<sum<<"\n"<<hieu<<"\n"<<nhan<<"\n"<<thuong;
	return 0;
}
