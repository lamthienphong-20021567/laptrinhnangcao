#include<iostream>
using namespace std;
int main()
{
	double diem,s,tb ;
	int i=1;
	while(diem>=0)
	{
		cout << "diem mon hoc " << i <<": ";cin >> diem;
		if(diem>10) {
		cout << "nhap lai diem mon hoc " << i << " (trong khoang 0..10) : "; cin >> diem;}
		if(diem<0) break;
		s = s+diem;
		i++;
   }
	i--;
	tb = s/i;
	cout << "so mon hoc: " << i<<endl;
	cout << "diem trung binh cua " << i << " mon hoc la: " << tb << endl;
	return 0;
	
}
