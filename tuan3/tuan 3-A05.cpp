#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a[30];
	srand(time(0));
	for(int i=0;i<30;i++)
	a[i] = rand() % (100-1+1)+1;
	for(int i=0;i<30;i++)
	{
		for(int j=i+1;j<30;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<30;i++)
	cout << a[i] << "\t";
}
