#include<iostream>
#include<cstring>
using namespace std;
char* concat(const char* a, const char* b)
{
	char *p = new char;
	int l1 = strlen(a),l2 = strlen(b);
	for(int i=0;i<l1;i++)
	*(p+i) = *(a+i);
	for(int i=l1;i<l1+l2;i++)
	{
	*(p+i) = *b;
	b++;
   }
   *(p+(l1+l2)) = '\0';
	return p;
}
int main()
{
	cout<<concat("Good"," Morning!!");
	return 0;
}
