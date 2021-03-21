#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
char so[10]={'0','1','2','3','4','5','6','7','8','9'};
char sodo[1000][1000],no[1000][1000];
char xuatra(int m, int n, char a[1000][1000])
{
     for(int i=0;i<m;i++)
    { 
       for(int j=0;j<n;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
}
char demsomin(int x,int y, char a[1000][1000],char b[1000][1000])
{
	int dem = 0;
	if(a[x-2][y-1]=='*') dem++;
          if(a[x-2][y]=='*') dem++;
          if(a[x-2][y-2]=='*') dem++;
          if(a[x-1][y-2]=='*') dem++;
          if(a[x-1][y]=='*') dem++;
          if(a[x][y]=='*') dem++;
          if(a[x][y-1]=='*') dem++;
          if(a[x][y-2]=='*') dem++;
          a[x-1][y-1] = so[dem];
          b[x-1][y-1] = so[dem];
}
void open_empty_pos(int x, int y,int m, int n,char str[1000][1000],char str1[1000][1000]) {
 	int i, j;
 	if(str[x-1][y-1]=='0'){
 		for (i = -1; i < 2; i++) {
 		    for (j = -1; j < 2; j++) {
 		    	if((i==0&&j!=0)||(i!=0&&j==0)){
 			   if(str[x-1+i][y-1+j]=='.')
 			   {
 			   	demsomin(x+i,y+j,str,str1);
 			   	if(str[x-1+i][y-1+i]=='0')
 			   	open_empty_pos(x+i,y+j,m,n,str,str1);
				}}
				
				
			}
		}
	}}
int main()
{
   int m,n,k;
   char a[2]={'*','.'};
   cout<<"nhap so hang,so cot, so min:";
   cin>>m>>n>>k;
   srand(time(0));
   cin.ignore();
   int demmin = 0;
        for(int i=0;i<m;i++)
        {
        	for(int j=0;j<n;j++)
        	no[i][j] = '.';
		}
		int o,p,s,t;
    while(demmin<k)
    {
    	 o = rand()%(m)+0;
    	 p = rand()%(n)+0;
		sodo[o][p] = '*'; demmin++;
	}
	for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
         {
           if(sodo[i][j]!='*')
           {sodo[i][j] = '.';demmin--;}
          }
    }
		xuatra(m,n,no);
    int x,y,d;
    do
     {
     	 d = 0;
       cout<<"vi tri muon chon:";
       cin>>x>>y;
       if(x>m||y>n||x==0||y==0)
        {
          cout<<"khong thoa man, nhap lai x=(1..."<<m<<"), y=(1..."<<n<<"):";
          cin>>x>>y;
        }
        if(x==s&&y==t) {
        	cout<<"vi tri nay da nhap, yc nhap lai(x#"<<s<<";"<<"y#"<<t<<"):";
        	cin >> x >> y;
		}
		if(sodo[x-1][y-1]!='*'&&sodo[x-1][y-1]!='.')
		{
			cout<<"vi tri da mo, nhap lai:";cin>>x>>y;
		}system("cls");
       if(sodo[x-1][y-1]=='*') 
         {
           cout<<"YOU'RE DEAD!"<<endl;
           xuatra(m,n,sodo);
            break;
          }
        else 
        {
          	demsomin(x,y,sodo,no);
          	if(sodo[x-1][y-1]=='0'){
          		 open_empty_pos(x,y,m,n,sodo,no);
	   }
}
	   for(int i=0;i<m;i++)
	   {
	   	for(int j=0;j<n;j++)
	   	{
		   if(sodo[i][j]!='.'&&sodo[i][j]!='*')
	   	d++;}
	   }
		xuatra(m,n,no);
		s = x;t = y;
        if(d>=(m*n-k)){ cout<<"YOU WIN!"<<endl;xuatra(m,n,sodo); break;}
       }while(d<=(m*n-k));
    return 0;
}

   
