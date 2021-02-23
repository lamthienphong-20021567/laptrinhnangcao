#include<iostream>
using namespace std;
int tongchuso(int n)
{
	int s=0,cs;
	do
	{
		cs = n%10;
		n = n/10;
		s = s+cs;
	}while(n!=0);
	return s;
}
int main()
{
	int n,s;
	cout << "nhap so n:";
	cin >> n;
		s = tongchuso(n);
		cout << "tong cac chu so cua n la:" << s;
	return 0;
}
