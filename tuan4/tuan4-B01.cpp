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
	 		if(a[i]+a[j]==0) cout<<"2 so co tong =0 la:"<<a[i]<<"\t"<<a[j]<<endl;
		 }
	 }
	 return 0;
	 
}
