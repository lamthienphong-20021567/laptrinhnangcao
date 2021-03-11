#include<iostream>
using namespace std;
int main()
{
	int n,a[10000];
	 cout<<"nhap n:";cin>>n;
	 for(int i=0;i<n;i++)
	 cin >> a[i];
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		{
	 			for(int k=j+1;k<n;k++)
	 		if(a[i]+a[j]+a[k]==0) cout<<"3 so co tong =0 la:"<<a[i]<<"\t"<<a[j]<<"\t"<<a[k]<<endl;}
		 }
	 }
	 return 0;
	 
}
