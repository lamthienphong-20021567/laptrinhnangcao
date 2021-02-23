#include<iostream>
using namespace std;
int main()
{
	int N,result = 0;
	cout << "nhap N:" ;cin >> N;
	int f[N];
	f[0] = 0;
	f[1] = 1;
	for(int i=0;i<=N;i++)
	{
		if(i>=2){
	  f[i] = f[i-1]+f[i-2];}
	  if(f[i]==N) 
	  result = 1;
	  if(f[i]>N)
	  break;
	  cout << "f["<<i<<"] = "<< f[i] <<"\n";
    }
    if(result == 1) cout<<"N thuoc day fibonxi"<<endl;
    else cout<<"N khong thuoc day fibonaxi"<<endl;
    return 0;
}
