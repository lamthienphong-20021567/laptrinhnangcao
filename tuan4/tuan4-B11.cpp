#include<iostream>
#include<cstring>
using namespace std;
struct xau
{
	string ten;
};
xau a[100];
int doixung(string s, string s2)
{
    string s1="";
    int len = s.length(),j=0;
    for(int i=len-1;i>=0;i--)
    {
        s1 = s1+s[i];
    }
    if(s1==s2) return 1;
    else return 0;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++)
    getline(cin, a[i].ten);
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		if(a[i].ten.length()==a[j].ten.length())
    		{
    			int len = a[i].ten.length();
    			if(doixung(a[i].ten, a[j].ten)==1)
    			{
    				cout<<len<<" "<<a[i].ten[len/2];
				}
			}
		}
	}
    return 0;
}
