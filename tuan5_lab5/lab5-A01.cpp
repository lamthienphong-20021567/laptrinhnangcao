#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int c=8;char s[10]="abcde";
	int a[100];
	char b[100][100];
	int d=9;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin.ignore();
	for(int i=0;i<n;i++)
	cin.getline(b[i], 10);
	for(int i=0;i<n;i++)
	{
		cout<<&a[i]<<"\t"<<(void *)&b[i]<<endl;
	}
	return 0;
}
	//dia chi cua cac gia tri trong 2 mang da thay doi khi them cac bien vao truoc mang
