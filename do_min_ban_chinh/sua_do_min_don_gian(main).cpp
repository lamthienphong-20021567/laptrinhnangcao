#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
char xuatra(int m, int n, char a[1000][1000])
{
     for(int i=0;i<m;i++)
    { 
       for(int j=0;j<n;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
}
int main()
{
   int m,n,k;
   char a[2]={'*','.'};
   char so[10]={'0','1','2','3','4','5','6','7','8','9'};
   char sodo[1000][1000];
   cout<<"nhap so hang,so cot, so min:";
   cin>>m>>n>>k;
   srand(time(0));
   cin.ignore();
   int demmin = 0;
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
           {sodo[i][j] = '.';}
          }
    }
    char no[1000][1000];
        for(int i=0;i<m;i++)
        {
        	for(int j=0;j<n;j++)
        	no[i][j] = '.';
		}
		xuatra(m,n,no);
    int x,y;
    int d= 0;
    do
     {
      int dem = 0;
       cout<<"vi tri muon chon(1..10),(1..10):";// nhap vao la so thu tu cua o bat dau tu 1.
       cin>>x>>y;
       if(x>m||y>n||x==0||y==0)
        {
          cout<<"khong thoa man, nhap lai x=(1..."<<m<<"), y=(1..."<<n<<"):";
        
          cin>>x>>y;
        }
        if(x==s&&y==t) {
        	cout<<"vi tri nay da nhap, yc nhap lai(x#"<<s<<";"<<"y#"<<t<<"):";
        	cin >> x >> y;
		}system("cls");
       if(sodo[x-1][y-1]=='*') 
         {
           cout<<"YOU'RE DEAD!"<<endl;
           xuatra(m,n,sodo);
            break;
          }
        else 
        {
          if(sodo[x-2][y-1]=='*') dem++;
          if(sodo[x-2][y]=='*') dem++;
          if(sodo[x-2][y-2]=='*') dem++;
          if(sodo[x-1][y-2]=='*') dem++;
          if(sodo[x-1][y]=='*') dem++;
          if(sodo[x][y]=='*') dem++;
          if(sodo[x][y-1]=='*') dem++;
          if(sodo[x][y-2]=='*') dem++;
          sodo[x-1][y-1] = so[dem];
        d++;
		no[x-1][y-1] = so[dem];
		xuatra(m,n,no);
        }
         s = x;
         t = y;
        if(d>=(m*n-k)){ cout<<"YOU WIN!"<<endl;xuatra(m,n,sodo); break;}
       }while(d<=(m*n-k));
    return 0;
}

   
