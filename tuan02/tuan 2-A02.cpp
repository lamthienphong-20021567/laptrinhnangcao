#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int k;
	srand(time(0));
	k = rand();
	do
	{
		k = k/3;
	}while(k>=3);
	cout << k;
}
