#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
 int the[3];
 int chon_the;
 int the_duoc_chon;
 int so_lan_doan;
 int max;
 cout<<"Nhap so lan doan: ";
 cin>>so_lan_doan;
 int temp = so_lan_doan;
 int so_lan_dung = 0;
 while(so_lan_doan > 0)
 {
 	cout<<"\nLan doan thu "<<temp - so_lan_doan + 1;
 	the[1] = rand() % 101;
 	the[2] = rand() % 101;
 	max = the[1] > the[2] ? the[1] : the[2];
	do{
	 	cout<<"\nBan muon xem the nao (Nhap 1 hoac 2):";
	 	cin>>chon_the;
	}while(chon_the <= 0 || chon_the >= 3);
	cout<<"Gia tri the "<<chon_the<<" la: "<<the[chon_the];
	do{
		cout<<"\nBan lua chon the nao: ";
		cin>>the_duoc_chon;
	}while(the_duoc_chon >= 3 || the_duoc_chon <= 0);
 	if(the[the_duoc_chon] == max)
 	{
 		cout<<"DUNG\n";
 		so_lan_dung++;
	}else{
		cout<<"SAI\n";
	}
 	so_lan_doan--;
 }
 if(so_lan_dung > temp/2)
 {
 	cout<<"\nCHIEN THANG";
 }
 else
 {
 	cout<<"\nTHUA CUOC";
 }
return 0;
}

