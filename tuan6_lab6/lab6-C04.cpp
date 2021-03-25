#include<iostream>
#include <cmath>
using namespace std;
bool a[100][100]; //1<<9 = 2^9 = 512
void init(int n, int x, int y, bool color){
	if (n == 1){
		a[x][y] = a[x][y+1] = a[x+1][y] = color;
//		printf("!color=%d\n", !color);
		a[x+1][y+1] = !color;
	}
	else{
		int N = 1<<(n-1);
//		printf("N=%d\n", N);
		init(n-1, x, y, color);
		init(n-1, x + N, y, color);
		init(n-1, x, y + N, color);
		init(n-1, x + N, y + N, !color);
	}
}
int main(){
	int n;
	cin>>n;
	init (n, 1, 1, 1);
	int N = 1<<n;
	for (int i=1; i<=N; i++){
		for (int j=1; j<=N; j++) 
			if (a[i][j]) cout<<"."; else cout<<"o";
		cout<<"\n";
	}
}
