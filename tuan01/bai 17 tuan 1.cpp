#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap vao nam: ";
	cin >> n;
	if(n%100==0)
	{
		if(n%400==0)
		cout << "true";
		else cout << "false";
	}
	else
	{
		if(n%4==0)
		cout << "true";
		else cout <<"false";
	}
	return 0;
	
}
