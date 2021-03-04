#include<iostream>
using namespace std;
int main()
{
	/*int n,a[100],b[100],dem;
	cin >> n;
	for(int i=0;i<n;i++)
	{
	  b[i] = 0;
    }
    for(int i=0;i<n;i++)
    cin >> a[i];
   for(int i=0;i<n;i++)
   {
   	dem = 1;
   	if(b[i]==0)
   	 {
   		for(int j=i+1;j<n;j++)
   		{
   			if(a[i]==a[j]) {
			   dem = dem+1;
			   b[j] = 1;}
		   }
		   cout << "so phan tu " << a[i] <<" la: " <<dem<<endl;
	   }
	   
   }

return 0;*/
    int n,a[100],b[100];
    cin >> n;
    for(int i=0;i<10;i++)
    b[i] = 0;
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    	b[a[i]]++;
    }
    for(int i=0;i<10;i++)
    cout << "so chu so " << i <<" la:" <<b[i] << endl;
	 return 0;   
    
}
