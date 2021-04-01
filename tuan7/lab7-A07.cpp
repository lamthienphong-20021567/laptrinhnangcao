#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100],b[100];
	fflush(stdin);
	cout<<"nhap a:";
	cin.getline(a,1000);
	cout<<"nhap b:";
	cin.getline(b,1000);
	int len = strlen(a),dem = 0;
	int len1 = strlen(b);
	for(int i=0;i<len1;i++)
	{
		char s1[1000] = "";
		s1[0] = b[i];int k=1;
		for(int j=i+1;j<i+len;j++)
		{
		s1[k] = b[j];k++;}
		if(strcmp(a,s1)==0) dem++;
	}
	cout<<dem;
}
