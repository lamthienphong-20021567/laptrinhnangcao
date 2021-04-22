#include<iostream>
using namespace std;
struct Point
{
	double x,y;
};
int main()
{
	Point a;
	cout<<&a.x<<" "<<&a.y<<" "<<&a;
	return 0;
}
