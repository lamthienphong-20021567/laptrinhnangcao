#include<iostream>
using namespace std;
bool majorty(bool a,bool b, bool c)
{
	return (a&&b)||(b&&c)||(c&&a);
}
int main()
{
	bool a,b,c;
	cin>>a>>b>>c;
	cout<<majorty(a,b,c);
}
