#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int chia25(int n)
{
	if(n%25==0) return 1;
	else return 0;
}
int main()
{
	int n,a[100];
	srand(time(0));
	cout<<"nhap n:";cin>>n;
	for(int i=0;i<n;i++)
	a[i] = rand()%(49-0+1)+0;
	cout<<"bo ba so co tong chia het cho 25 la:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				int c= a[i]+a[j]+a[k];
				if(chia25(c)==1)
				{
					cout<<a[i]<<"\t"<<a[j]<<"\t"<<a[k]<<endl;
				}
			}
		}
	}
	return 0;
}
