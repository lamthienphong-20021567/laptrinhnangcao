#include<iostream>
using namespace std;
struct Point
{
	double x,y;
};
void print(Point A)
{
	cout<<"("<< A.x<<", "<<A.y<< ")";
}
int main()
{
	Point a;
	cin>>a.x>>a.y;
	print(a);
}
