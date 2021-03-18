#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int trave(int n)
{
	int a;
	srand(time(0));
	return a = rand()%(n-0+1)+0;
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	int a = trave(n);
	cout<<a;
	return 0;
}
