#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a[100000];
	srand(time(0));
	int n = rand()%(10000-1000+1)+1000;
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	a[i] = rand()%(1000-0+1);
	clock_t begin = clock();
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
	clock_t end = clock();
	double elapsedSecs = double(end-begin) / CLOCKS_PER_SEC;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<"\nthoi gia chay sap xep la:"<<elapsedSecs;
}
