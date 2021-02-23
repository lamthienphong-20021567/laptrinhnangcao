#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;cout << a <<"\t";
	do
	{
		b = a;
		cin >> a;
		if(a!=b) cout << a <<"\t";
	}while(a>=0);
	return 0;
}
