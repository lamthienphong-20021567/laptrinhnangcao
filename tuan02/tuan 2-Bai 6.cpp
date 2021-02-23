#include<iostream>
using namespace std;
int main()
{
	int tu,mau;
	cin >> tu >>mau;
	cout << "phan so truoc la:" << tu << "/" << mau<<endl;
	int min = tu;
	if(tu>mau) min = mau;
	int ucln;
	for(int i=min;i>=1;i--)
	{
		if(tu%i==0&&mau%i==0)
		{
			ucln = i;
			break;
		}
	}
	tu = tu/ucln;mau = mau/ucln;
	cout << "phan so toi gian la:" << tu << "/" << mau;
	return 0;
}
