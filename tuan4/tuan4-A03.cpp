#include<iostream>
using namespace std;
int main()
{
	int k,n,a[100],j,result = 0;
	cout<<"so can tim:";cin >> k;
	cout <<"nhap n:";cin >> n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp =  a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<"mang sau sap xep la:";
	for(int i=0;i<n;i++)
	cout << a[i] <<"\t";
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			j = i+1;
			result = 1;
			break;
		}
		
	}
	if(result==0) cout<<"\nkhong co so can tim trong mang!";
	else cout<<"\nvi tri so can tim la:"<<j;
	return 0;
}
