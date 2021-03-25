#include<iostream>
using namespace std;
void f(int a[])
{
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
}
int main()
{
	int a[5] = {1,2,3,4,5};
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
	f(a);
	return 0;
}
//vi tri bien mang a va a[0] trong ham main la giong nhau va bang vi tri cua bien mang a trong f
//vi tri bien mang a trong f khac vi tri a[0].
