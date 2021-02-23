#include<iostream>
using namespace std;
int kiemtrasnt(int n)
{
	int result = 0;
	if(n<=1) result = 1;
	if(n>2)
		{
			for(int i=2;i<n-1;i++)
			{
				if(n%i==0)
				{
					result = 1;
					break;
				}
			}
    	}
	if(result==0||n==2)
	return 0;
	else return 1;
}
int main()
{
	int n;cout << "nhap n:";
	cin >> n;
	if(kiemtrasnt(n)==1) cout << "no";
	else
	cout << "yes";
	return 0;
	
}


