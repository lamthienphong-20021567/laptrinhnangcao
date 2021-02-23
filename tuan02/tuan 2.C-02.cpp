#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n:";cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<i) cout << " ";
			if(j>=i)
		  {
	       cout << "*";}
	    }
		cout << "\n";
	}
	return 0;
}
