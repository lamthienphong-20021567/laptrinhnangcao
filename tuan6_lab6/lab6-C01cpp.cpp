#include<iostream>
using namespace std;
int a[9], cnt = 0;

void show(){
	for (int i=1; i<=8; i++){
		for (int j=1; j<a[i]; j++) cout<<".";
		cout<<"*";
		for (int j=a[i]+1; j<=8; j++) cout<<".";
		cout<<"\n";
	}
	cout<<"\n";
	cnt++;
}

void backtrack(int n){
	if (n == 9){
		show();
		return;
	}
	
	bool c[16];
	for (int i=1; i<=8; i++)  c[i] = 1;
	
	for (int i=1; i<n; i++){
		c[a[i]] = 0;
		c[a[i] + (n - i)]	= 0;
		c[a[i] - (n - i)]	= 0;
	}
	
	for (int i=1; i<=8; i++)
		if (c[i]){
			a[n] = i;
			backtrack(n+1);
		}
}

int main(){
	backtrack(1);
	cout<<"co "<<cnt<<" cach sap xep";
}
