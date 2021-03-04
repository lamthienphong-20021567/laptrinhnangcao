#include<iostream>
using namespace std;
int main()
{
	string s;int result = 0;
    cout << "nhap xau s:";	getline(cin, s);
	int len = s.length();
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1])
		{
		result = 1;
		break;}
	}
	if(result==1) cout << "no";
	else cout << "yes";
}
