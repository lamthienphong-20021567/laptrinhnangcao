#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	do
	{
		n = n/3;
	}while(n>=3);
	cout << n;
}
