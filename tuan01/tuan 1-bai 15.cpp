#include<iostream>
#include<string>
using namespace std;
string f(int n){
	if(n == 1) return "b";
	if(n == 0) return "a";
	return f(n-1) + f(n-2);
};
int main()
{
string Fibonacy[11];
for(int i = 0; i< 11; i++){
	Fibonacy[i] = f(i);
}
for(int i = 0; i< 11; i++){
	cout<<"f("<<i<<") = "<<Fibonacy[i]<<"\n";
}
return 0;
}

