#include<iostream>
#include<cstring>
using namespace std;
struct String
{
	String(const char*);
	~String();
	void print();
	void append(const char*);
	private:
		int n;
		char *str;
};
String::String(const char*s )//constructor
{
	n = strlen(s);
	str = new char[n+1];
	strcpy(str,s);
}
String::~String()//destructor
{
	delete str;
}
void String::print()
{
	cout<<str;
}
void String::append(const char* s1)
{
	char *p = new char;
	strcpy(p,str);
	strcat(p,s1);
	str = p;
}
int main()
{
	String s("Hello");
	s.print();cout<<endl;
	String greeting("Hi");
	greeting.append(" there");
	greeting.print();
	return 0;
}
