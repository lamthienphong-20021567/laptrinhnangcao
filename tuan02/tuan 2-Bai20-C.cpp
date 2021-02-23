#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,s;
	cout << "so tien: ";cin >> n;
    s = n*(pow(1.02,12));
	cout << "tong tien sau 1 nam:" << s;
	return 0;
}
