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
		if(a[i]==k)
		{
			j = i+1;
			result = 1;
			break;
		}
		
	}
	if(result==0) cout<<"khong co so can tim trong mang!";
	else cout<<"vi tri so can tim la:"<<j;
	return 0;
}
