#include<iostream>
using namespace std;
int diachi(int a[])
{
	int n = sizeof(a);
	cout<<n<<endl;
}
int main()
{
	int *p;
	p = new int[10];
	cout<<"dia chi trong ham la:";
	diachi(p);
    cout<<"dia chi trong main la:";
	cout<<sizeof(p)<<endl;
}
//dia chi trong ham va main la nhu nhau
