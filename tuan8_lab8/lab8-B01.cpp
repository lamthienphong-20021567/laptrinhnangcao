#include<iostream>
using namespace std;
int len(char a[])
{
	int n = 0;
	char *p;p = a;
	while(*p!=0)
	{
		n++;
		p++;
	}
	return n;
}
void reverse(char a[])
{
	int l = len(a);
	char *p = a;
	for(int i=l-1;i>=0;i--)
	cout<<*(p+i);
	cout<<endl;
}
char* delete_char(char a[],char c)
{
	int l = len(a);
	char *p = a;int i=0;
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
	return a;
}
char* pad_right(char a[],int n)
{
	int l = len(a);
	char *p = a;
	if(l>=n) return a;
	else
	{
		for(int i=l;i<n;i++)
		{
			*(p+i) = '_';
			l++;
		}
		return a;
	 } 
}
char* pad_left(char a[],int n)
{
	int l = len(a);
	char *p = a;
	if(l>=n) return a;
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
	return a;
    }
}
char* truncate(char a[],int n)
{
	int l = len(a);
	char *p = a;
	if(l<=n) return a;
	else
	{
		l = n;
		*(p+n) = '\0';
		return a;
	}
}
 bool is_palindrome(char a[])
 {
 	int l = len(a);
 	char *p = a;
 	int k = l/2,result = 0;
 	for(int i=0;i<=k;i++)
 	{
 		if(*(p+i)!=*(p+l-1-i))
 		{
 			result = 1;
 			break;
		 }
	 }
	 if(result==1) return false;
	 else return true;
 }
 char* trim_left(char a[])
 {
 	int l = len(a);
 	char *p = a;int i=0;
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
	 return a;
 }
 int kiemtraspace(char a[],int i)
 {
 	int l = len(a),result = 0;
 	char *p = a;
 	for(int j=i;j<l;j++)
 	{
 		for(int k=j+1;k<l;k++)
 		{
 			if(*(p+j)!=' '&&*(p+k)!=' ')
 			{
 				result = 1;
 				break;
			 }
		 }
	 }
	 if(result==1) return 0;
	 else return 1;
 }
 char* trim_right(char a[])
 {
 	int l = len(a);
 	char *p = a;
 	for(int i=0;i<l;i++)
 	{
 		if(kiemtraspace(p,i)==1)
 		{
 			*(p+i+1) = '\0';
 			l = i+1;
 			break;
		 }
	 }
	 return a;
 }
int main()
{
	char s[1000];
	cout<<"xau s:";cin.getline(s,1000);
	char chon;
	cout<<"\nlua chon phan:";cin>>chon;
	switch(chon)
	{
		case 'a':
			reverse(s);
			break;
		case 'b':
			char c;cout<<"ki tu can xoa:";cin>>c;
			cout<<delete_char(s,c);
			break;
		case 'c':
			int n;cout<<"\ndo dai:";cin>>n;
			cout<<pad_right(s,n);
			break;
		case 'd':
			int nd;cout<<"\ndo dai:";cin>>nd;
			cout<<pad_left(s,nd);
			break;
		case 'e':
			int ne;cout<<"\ndo dai:";cin>>ne;
			cout<<truncate(s,ne);
			break;
		case 'f':
			if(is_palindrome(s)==true) cout<<"xau doi xung";
			else cout<<"xau khong doi xung";
			break;
		case 'g':
			cout<<trim_left(s);
			break;
		case 'h':
			cout<<trim_right(s)<<".";
			break;
	}
	
}

