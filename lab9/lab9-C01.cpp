#include<iostream>
using namespace std;
int len(const char *a)
{
	int n = 0;
	while(*a!=0)
	{
		n++;
		a++;
	}
	return n;
}
void reverse(const char *a)
{
	int l = len(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	for(int i=l-1;i>=0;i--)
	cout<<*(p+i);
	cout<<endl;
}
char* delete_char(const char *a,char c)
{
	int l = len(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	int i=0;
	while(i<l)
	{
		if(*(p+i)==c)
		{
			for(int j=i;j<l;j++)
			{
				*(p+j) = *(p+j+1);
			}
			i--;
			l--;
		}
		i++;
	}
	*(p+l) = '\0';
	return p;
}
char* pad_right(const char *a,int n)
{
	int l = len(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	if(l>=n) return p;
	else
	{
		for(int i=l;i<n;i++)
		{
			*(p+i) = '_';
			l++;
		}
		*(p+n) = '\0';
		return p;
	 } 
}
char* pad_left(const char *a,int n)
{
	int l = len(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	if(l>=n) return p;
	else
	{
		int k = n-l;int i = n-1;
		while(l>=0)
		{
			*(p+i) = *(p+l-1);
		     l--;i--;
		}
	
	for(int i=0;i<k;i++)
	*(p+i) = '_';
	l = n;
	*(p+n) = '\0';
	return p;
    }
}
char* truncate(const char *a,int n)
{
	int l = len(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	if(l<=n) return p;
	else
	{
		l = n;
		*(p+n) = '\0';
		return p;
	}
}
 char* trim_left(const char *a)
 {
 	int l = len(a);
 	char *p = new char;
	 for(int i=0;i<l;i++)
	 {
	 	*(p+i) = *a;
	 	a++;
	 }
	 *(p+l) = '\0';
	 int i=0;
 	while(i<l)
 	{
 		if(*(p+i)==' ')
 		{
 			for(int j=i;j<l;j++)
 		    *(p+j) = *(p+j+1);
 		    l--;
 		    i--;
		 }
		 else
		 break;
		 i++;
	 }
	 *(p+l) = '\0';
	 return p;
 }
 int kiemtraspace(char *a,int i)
 {
 	int l = len(a),result = 0;
 	for(int j=i;j<l;j++)
 	{
 		for(int k=j+1;k<l;k++)
 		{
 			if(*(a+j)!=' '&&*(a+k)!=' ')
 			{
 				result = 1;
 				break;
			 }
		 }
	 }
	 if(result==1) return 0;
	 else return 1;
 }
 char* trim_right(const char *a)
 {
 	int l = len(a);
 	char *p = new char;
 	for(int i=0;i<l;i++)
 	{
 		*(p+i) = *a;
 		a++;
	 }
	 *(p+l) = '\0';
 	for(int i=0;i<l;i++)
 	{
 		if(kiemtraspace(p,i)==1)
 		{
 			*(p+i+1) = '\0';
 			l = i+1;
 			break;
		 }
	 }
	 return p;
 }
int main()
{
	 char s[1000];
	cout<<"xau s:";cin.getline(s,1000);
			cout<<"a:";reverse(s);
			cout<<"b:";
			char c;cout<<"ki tu can xoa:";cin>>c;
			cout<<delete_char(s,c)<<endl;
			cout<<"c:";
			int n;cout<<"\ndo dai:";cin>>n;
			cout<<pad_right(s,n)<<endl;
			cout<<"d:";
			int nd;cout<<"\ndo dai:";cin>>nd;
			cout<<pad_left(s,nd)<<endl;
			cout<<"e:";
			int ne;cout<<"\ndo dai:";cin>>ne;
			cout<<truncate(s,ne)<<endl;
			cout<<"g:";
			cout<<trim_left(s)<<endl;
			cout<<"h:";
			cout<<trim_right(s)<<".";
	return 0;
	
}

