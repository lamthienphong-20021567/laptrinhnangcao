#include<iostream>
using namespace std;
int main()
{
	int n,dem = 0;
	double a,b,max,min;
	cout << "nhap n:";cin >> n;
	cin >> a;
	max = a;
	min = a;
    dem++;
    do
    {
    	cin >> b;
    	if(max <b) max = b;
    	if(min>b) min = b;
    	dem++;
	}while(dem<n);
	cout << "max = " << max<<endl;
	cout << "min = " << min << endl;
	return 0;
}
