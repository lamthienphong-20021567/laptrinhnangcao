#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
char so[10]={'0','1','2','3','4','5','6','7','8','9'};
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
int main()
{
   int m,n,k;
   char a[2]={'*','.'};
   char sodo[1000][1000];
   cout<<"nhap so hang,so cot, so min:";
   cin>>m>>n>>k;
   srand(time(0));
   cin.ignore();
   int demmin = 0;
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
         {
           sodo[i][j] = a[rand()%2+0];
           if(sodo[i][j]=='*')
           demmin++;
           if(demmin>k)
           {sodo[i][j] = '.';demmin--;};
          }
    }
    char no[1000][1000];
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
    	if(demmin<k&&sodo[o][p]!='*')
    	{
		sodo[o][p] = '*'; demmin++;}
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
          	for(int j=y;j>=1;j--)
          	{
          		for(int i=0;i<=m;i++)
          		{
          			if(i<x){
          				if(sodo[x-1-i][j-1]=='*') break;
          			if(sodo[x-1-i][j-1]!='*')
          			{
					  demsomin(x-i,j,sodo,no);
					  if(sodo[x-i-1][j-1]!='0') break;
				}
          			}
          			if(i>=x)
          			{
          				if(sodo[i-1][j-1]=='*') break;
          				if(sodo[i-1][j-1]!='*')
          			{
					  demsomin(i,j,sodo,no);
					  if(sodo[i-1][j-1]!='0') break;
				}
					  }
				  }
			  }
			  for(int j=y;j<=n;j++)
			  {
			  	for(int i=0;i<=m;i++)
			  	{
			  		if(i<x)
			  		{
			  			if(sodo[x-1-i][j-1]=='*') break;
			  		if(sodo[x-1-i][j-1]!='*')
          			{
					  demsomin(x-i,j,sodo,no);
					  if(sodo[x-i-1][j-1]!='0') break;
				}
          			}
          			else
          			{
          				if(sodo[i-1][j-1]=='*') break;
          					if(sodo[i-1][j-1]!='*')
          			{
					  demsomin(i,j,sodo,no);
					  if(sodo[i-1][j-1]!='0') break;
				}
					  }
				  }
			  }
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

   
