#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int inra(int k,int n)
{
	for(int i=k;i<n;i++)
	cout<<i+1<<" ";
}
void chay(int &vitri, int (*buoc)())
{
	vitri = vitri+(*buoc)();
}
int rua()
{
    int x;
    x = rand()%100+1;
    if(x<=50) return 3;
    if(x>50&&x<=80) return 1;
    if(x>80) return -6;
}
int tho()
{
	int x;
	x = rand()%100+1;
	if(x<=20) return 0;
	else if(x>20&&x<=40) return 9;
	else if(x>40&&x<=50) return -12;
	else if(x>50&&x<=80) return 1;
	else return -2;
}
int main()
{
	int vtr = 0,vtt = 0,(*br)(),(*bt)();
	srand(time(0));
	cout<<"[R/T] "<<"|start| ";inra(0,70);cout<<" |finish|\n";
	cout<<"--------------------start-------------------\n\n";
	while(vtr<=70&&vtt<=70)
	{
		br = rua;
		bt = tho;
		chay(vtr,br);
		chay(vtt,bt);
		if(vtr<0) vtr = 0;
		if(vtt<0) vtt = 0;
		if(vtt>vtr)
		{cout<<"|start| ";inra(0,vtr-1);cout<<"[R] ";inra(vtr,vtt-1);cout<<"[T] ";inra(vtt,70);cout<<" |finish|";}
		else if(vtt<vtr)
		{cout<<"|start| ";inra(0,vtt-1);cout<<"[T] ";inra(vtt,vtr-1);cout<<"[R] ";inra(vtr,70);cout<<" |finish|";}
		else
		{cout<<"|start| ";inra(0,vtr-1);cout<<"[R/T] ";inra(vtt,70);cout<<" |finish|";}
		cout<<"\n---------------------------------------------------------------------------------------------------------\n";
		if(vtr>=70&&vtt<70) {
		cout<<"\nRua win!!"<<"\n--------finish game-------------";break;}
		if(vtt>=70&&vtr<70) {
		cout<<"\nTho win!!"<<"\n---------finish game-------------";break;}
		if(vtt>=70&&vtr>=70)
		{
			cout<<"\n2 con hoa nhau!!"<<"\n----------finish game---------";
			break;
		}
		cout<<"\n";
	}
	return 0;
	
}
