#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,tien,thue,tiendauthang;
	cout << "so gio lam viec: ";cin >> n;
	if(n<=150) tien = 100*12000+(n-100)*16000;
	if(n>150&&n<=200) tien = 100*12000+50*16000+(n-150)*20000;
	if(n>200) tien = 100*12000+50*16000+50*20000+(n-200)*25000;
	int ttien = tien-tien*9/100;
	if(ttien<1000000) thue = 0;
	if(ttien>1000000&&ttien<=1500000) thue = (ttien-1000000)*10/100;
	if(ttien>1500000&&ttien<=2000000) thue = 500000*10/100+(ttien-1500000)*15/100;
	if(ttien>2000000) thue = 500000*10/100+500000*15/100+(ttien-2000000)*20/100;
	int tientt = ttien-thue;	cout << "thu nhap sau thue cua sv: " << tientt <<endl;
	int tienkd = 1500000+tientt;
	int tientra = tienkd-2000000;
	int A = 10000000;
	tiendauthang = A;
	cout << "so tien lai cuoi thang thu 1: " << A*0.02<<endl;
	int i=1;
	do
	{
	    int tiencuoithang = tiendauthang*1.02;
		tiendauthang = tiencuoithang-tientra;
	    int tienlai = tiendauthang*0.02;
	    cout << "so tien dau thang thu "<<i+1<<": "<<tiendauthang << endl;
		cout << "so tien lai cuoi thang thu "<< i+1 <<": "<<tienlai <<endl;
		i++;
		if(tiendauthang<=0) break;
	}while(tiendauthang>0);
	return 0;
	
	
}
