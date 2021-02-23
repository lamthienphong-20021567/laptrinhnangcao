#include<iostream>
using namespace std;
int main()
{
	int n,thue;
	cout << "so tien: ";cin >> n;
	int tien = n-n*9/100;
	if(tien<1000000) thue = 0;
	if(tien>1000000&&tien<=1500000) thue = (tien-1000000)*10/100;
	if(tien>1500000&&tien<=2000000) thue = 500000*10/100+(tien-1500000)*15/100;
	if(tien>2000000) thue = 500000*10/100+500000*15/100+(tien-2000000)*20/100;
	int tientt = tien-thue;
	cout << "tien thue phai nop: " << thue<<endl;
	cout << " thu nhap sau thue: " << tientt << endl;
	return 0;
}
