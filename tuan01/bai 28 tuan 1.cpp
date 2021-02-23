#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<24;i++)
	{
		if(i==0) cout << "12 midnight\n";
		else if(i >=1&&i<=11) cout << i << "am\n";
		else if(i==12) cout << "12 noon\n";
		else cout << i << "pm\n";
	}
	return 0;
}
