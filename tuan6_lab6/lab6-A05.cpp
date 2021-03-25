#include<iostream>
#include<ctime>
using namespace std;
/*long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}*/
long fi(int a[100],int n)
{
	a[0] = 0;
	a[1] = 1;
	for(int i=2;i<=n;i++)
	a[i] = a[i-1]+a[i-2];
}
int main()
{
	int n,a[100];
	cin>>n;
	clock_t begin = clock();
	//cout<<F(n)<<endl;
	fi(a,n);
	cout<<a[n]<<endl;
	clock_t end = clock();
double elapsedSecs = double(end-begin) / CLOCKS_PER_SEC;
	cout<<elapsedSecs;
}
// voi n=40 thi tg chay voi de quy la 1.532s
// voi n=40 chay vong lap mat 0.004s
