#include<iostream>
using namespace std;
int cout_even(int *a, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0) s = s+1;
	}
	return s;
}
int main()
{
	int a[12] = { 3,5,6,8,9,2,10,50,70,17,58,37},b[100];
	int *p;p = a;
	cout<<"5 phan tu dau co so so chan la: ";
	cout<<cout_even(p,5)<<endl;
	int j=0;
	for(int i=11;i>=0;i--)
	{
	b[j] = a[i];j++;}
	p = b;
	cout<<"5 phan tu cuoi co so so chan la: ";
	cout<<cout_even(p,5);
	return 0;
}
