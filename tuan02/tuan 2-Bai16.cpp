#include<iostream>
using namespace std;
int main()
{
    string tenso[10] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	int so;
	do{
	cout << "nhap vao mot so trong khoang 0..9: ";cin >> so;
	cout << "vua nhap chu so:" << " " << tenso[so]<<endl;} while(so<10);
	return  0;	
}
