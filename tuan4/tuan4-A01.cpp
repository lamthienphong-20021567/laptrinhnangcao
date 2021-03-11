#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,a[1000];
	char choice;cout<<"truong hop:";
	cin >> choice;
	switch(choice)
   {
		case 'a'/*th co ban*/:case 'b'/*co 1 so*/:case'c'/*khong co so*/:case'e'/*day tang dan*/:case'f'/*day giam dan*/:
		{
			cout << "nhap n:";
			cin >> n;
			cout<<"mang ban dau:";
			for(int i=0;i<n;i++)
			cin >> a[i];
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			cout<<"mang sau sap xep la:";
			for(int i=0;i<n;i++)
			cout << a[i] <<"\t";
			break;
		}
	case 'd'/*100 so ngau nhien*/:
		{
			srand(time(0));
			cout<<"mang ban dau:";
			for(int i=0;i<99;i++)
			{
			a[i] = rand()%(100-1+1)+1;cout<<a[i]<<"\t";}
			for(int i=0;i<99;i++)
			{
				for(int j=i+1;j<99;j++)
				{
					if(a[i]>a[j])
					{
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			cout<<"\n\nmang sau sap xep la:";
			for(int i=0;i<99;i++)
			cout << a[i] <<"\t";
		}
   }
		return 0;
}

