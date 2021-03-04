// phuong phap : sap xep cac benh nhan theo thoi gian kham tang dan
#include<iostream>
using namespace std;
int main()
{
      int n, a[1000],s = 0;
      cout << "so benh nhan:";cin >> n;
      for(int i=0;i<n;i++)
      {
	  cout << "thoi gian kham cua bn " << i+1 << " la: ";cin >> a[i];}
      for(int i=0;i<n;i++)
      {
      	for(int j=i+1;j<n;j++)
      	{
      		if(a[i]>a[j])
      		{
      			int temp = a[i];
      			a[i] = a[j];
      			a[j] = temp;
			  }
		  }
	  }
	  int b[1000];b[0] = 0;
	  for(int i=1;i<n;i++)
	  {
	    b[i] = b[i-1]+a[i-1];
	    s = s+b[i];cout << b[i] << " ";
	  }
	  cout << "tg cho la: " << s;
}
