#include<iostream>
using namespace std;
int gt(int n)
{
	if(n==0) return 1;
	else return gt(n-1)*n;
}
int tohop(int k, int n)
{
	return gt(n)/(gt(k)*gt(n-k));
}
int kiemtra(int k,int n)
{
	if((1<=n&&n<=20)&&(0<=k&&k<=n)) return 1;
	else return 0;
}
void nhapKn(int k[], int n[],int sophantu)
{
	cout<<"nhap du lieu k:";
	for(int i=0;i<sophantu;i++)
	{
	cin>>k[i];if(k[i]==-1) break;}
	cout<<"nhap du lieu n:";
	for(int i=0;i<sophantu;i++)
	{cin>>n[i];if(n[i]==-1) break;}
}
int main()
{
	int k[100], n[100], spt;
	cin>>spt;
	nhapKn(k,n,spt);
	for(int i=0;i<spt;i++)
	{
		if(kiemtra(k[i],n[i])==1)
		{
			cout<<tohop(k[i],n[i])<<endl;
		}
	}
	return 0;
}

