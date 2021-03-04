#include<iostream>
using namespace std;

int main()
{
int n,sonhapvao;
cout<<"n = ";
cin >> n;
int dem[n];
for(int i = 0; i < 10; i++){
	dem[i] = 0;
}
for(int i = 0;i < n; i++){
	cout<<"Nhap so thu "<<i<<" : ";
	cin >> sonhapvao;
	dem[sonhapvao]++;	
}
for(int i= 0; i < 10; i++){
		cout<<"So chu so "<<i<<" la: "<<dem[i] <<"\n";
	}	

return 0;
}

