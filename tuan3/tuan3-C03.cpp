#include<iostream>
using namespace std;
int kiemtra(int n)
{
	int a[100],chuso,i=0,s =0,result = 0;
	do
	{
		chuso = n%10;
		n = n/10;
		a[i] = chuso;
		i++;
		s++;
	}while(n!=0);
	for(int i=0;i<s/2;i++)
	{
		if(a[i]!=a[s-i-1])
		{
			result = 1;
			break;
		}
	}
	cout <<s;
	if(result==0) return 1;
	else return 0;
}
int main()
{
	int a,b,i,k,test = 0;;
	cin >> k;
	do
	{
		int dem = 0;
	cout<<"nhap a: ";cin>>a;
	cout<<"nhap b: ";cin>>b;
	for(int i=a;i<=b;i++)
	{
		if(kiemtra(i)==1)
		dem = dem+1;
	}
	cout<<dem<<"\n";
	test++;
}while(test<k);
return 0;
}
