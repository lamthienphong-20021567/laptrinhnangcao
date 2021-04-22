#include<iostream>
using namespace std;
struct Point
{
	double x,y;
};
void mid_print(Point A,Point B)
{
	Point c;
	c.x = (A.x+B.x)/2;
	c.y = (A.y+B.y)/2;
	cout<<"("<<c.x<<","<<c.y<<")";
}
int main()
{
	Point a,b;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	mid_print(a,b);
}
