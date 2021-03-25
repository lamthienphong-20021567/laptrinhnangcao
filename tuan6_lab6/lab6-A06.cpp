#include<iostream>
using namespace std;
long a[100000000],dem = 0;
long tran(int i)
{
	if(i==10000000) a[i] = 5;
	else {
	a[i] = a[i-1]+1;
	 cout<<tran(i+1);dem++;}
}
int main()
{
	tran(1);
	cout<<"\n"<<dem;
}
// tuy vao chuong tinh de quy co tran hay khong,vi du o day thi chung trinh khong tran
