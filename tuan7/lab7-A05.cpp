#include<iostream>
using namespace std;
char* weird_string() {
 char c[7] = “123345”;
 return c;
}
int main()
{
	cout<<weird_string();
	return 0;
}
// trinh bien dich canh bao: address of local variable 'c' returned [-wreturn-local-addr]

