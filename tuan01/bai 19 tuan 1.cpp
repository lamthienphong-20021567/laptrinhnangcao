#include<iostream>
using namespace std;
int main()
{
	int a,d,c;
	cout << "nhap 3 so: ";
	cin >> a >> d>> c;
	bool b;
	if((a>d&&d>c)||(a<d&&d<c))
	b = true;
	else
	b = false;
	cout << b;
	return 0;
}
