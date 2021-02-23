#include<iostream>
using namespace std;
int main()
{
	int n,a[n],s=0,mean;
	cout << "nhap n";
	cin >> n;
	cout << "nhap n so:";
	for(int i=0;i<n;i++)
	{
	 cin >> a[i];
	  s = s+a[i];
    }
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
	mean = s/n;
	cout << "mean: "<<mean<<"\nmax: " << a[n-1] << "\nmin" << a[0];
	return 0;
}
