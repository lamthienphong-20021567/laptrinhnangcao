#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int xucxac()
{
	int x;
	return x = rand()%(6)+1;
}
int main()
{
	int a[100],b[100],ta=0,tb=0,t,t1;
	srand(time(0));
	while(ta<=100&&tb<=100)
	{
		if(ta<=tb)
		{
			 t = xucxac();ta = ta+t;
			 cout<<"diem nguoi 1:"<<t<<"\n";
			 cout<<"tong diem nguoi 1:"<<ta<<"\n";
			 if(ta>=100) {
			 	cout<<"\n=====>nguoi 1 thang"<<"\n";
			 	break;
			 }
			 else t1 = xucxac();tb = tb+t1;
			 cout<<"diem nguoi 2:"<<t1<<"\n";
			 cout<<"tong diem nguoi 2:"<<tb<<"\n";
			 if(tb>=100)
			 {
			 	cout<<"\n=====>nguoi 2 thang"<<endl;
			 	break;
			 }
			 
		}
		 else
		{
		   t1 = xucxac();tb = tb+t1;
		   cout<<"diem nguoi 2:"<<t1<<"\n";
		   cout<<"tong diem nguoi 2:"<<tb<<"\n";
		   if(tb>=100)
			 {
			 	cout<<"\n=====>nguoi 2 thang"<<endl;
			 	break;
			 }
			 else t = xucxac();
			 ta = ta+t;
			 cout<<"diem nguoi 1:"<<t<<"\n";
			 cout<<"tong diem nguoi 1:"<<ta<<"\n";
			 if(ta>=100) {
			 	cout<<"\n=====>nguoi 1 thang"<<"\n";
			 	break;
			 }
		   	
		}
		cout<<"\n--------------------------\n";
	}
}
