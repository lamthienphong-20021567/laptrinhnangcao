#include<iostream>
using namespace std;
int main()
{
	int n;
	while(2!=0)
	{
		cout << "nhap n: ";
		cin >> n;
		if(n>0&&n%5==0)
		cout << n/5<<endl;
		else if(n!=-1)
		cout << -1<<endl;
		else
		{
			cout << "Bye";
			break;		}
	}
	return 0;
}
