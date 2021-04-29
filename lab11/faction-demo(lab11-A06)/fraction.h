#ifndef FRACTION_H
#define FRACTION_H
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
#endif
