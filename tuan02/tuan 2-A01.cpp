#include<iostream>
using namespace std;
int main()
{
	int n = 100;
/*	for(int i=0;i<=n;i++)
	{
		if(i%2==0) cout<<i<<"\t";
	}
	return 0;*/
	/*int i=0;
	do
	{
		if(i%2==0) cout << i<<"\t";i++;
	}while(i<=n);
	return 0;*/
	int i=0;
	while(i<=n)
	{
		if(i%2==0) cout << i << "\t";
		i++;
	}
}
