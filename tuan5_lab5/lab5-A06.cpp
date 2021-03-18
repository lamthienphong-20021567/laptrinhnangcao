#include<iostream>
using namespace std;
int search_use_de_quy(int x, int a[], int l, int h)
{
	int mid = (l+h)/2;
	if(a[mid]==x) return mid;
	if(a[mid]<x) return search_use_de_quy(x,a,mid+1,h);
	if(a[mid]>x) return search_use_de_quy(x,a,l,mid-1);
}
int search_use_lap(int x, int a[],int l,int h)
{
	while(h>=1)
	{
		int mid = (l+h)/2;
		if(a[mid]==x) return mid;
		if(a[mid]>x) h = mid-1;
		if(a[mid]<x) l = mid+1;
	}
}
int main()
{
	int a[11] = {1,2,5,7,10,11,17,18,23,29,49};
	int x;cout<<"so can tim:";cin>>x;
	cout<<"x la gia tri thu:"<<search_use_de_quy(x,a,0,10)+1<<"(su dung de quy)"<<endl;
	cout<<"x la gia tri thu:"<<search_use_lap(x,a,0,10)+1<<"(su dung lap)"<<endl;
	return 0;
}
// chuong trinh khong in ra gi co nghia so can tim khong co trong day.
