#include<iostream>
#include<cstring>
using namespace std;
struct Node
{
	const char* element;
	Node* next;
    Node(const char* e = NULL, Node* n = NULL)
  {
   element = e;
     next = n;
  }
};
struct SLink
{
	Node* head;
	Node* tail;
	SLink()
	{
		head = NULL;
	}
	void addfirst(const char* s);
	void print();
	void removeFirst();
};
void SLink::addfirst(const char*s)
{
	Node *newnode = new Node;
	newnode->element = s;
	newnode->next= head;
	head = newnode;
}
void SLink::print()
{
	
	for (Node *p = head; p != NULL; p = p->next) 
    cout << p->element<<".";
}
char* xoasau(const char*a)
{
	int l = strlen(a);
	char *p = new char;
	for(int i=0;i<l;i++)
	{
		*(p+i) = *a;
		a++;
	}
	*(p+l) = '\0';
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l-1;j++)
		*(p+j) = *(p+j+1);
		l--;
	}
	return p;
}
void SLink::removeFirst()
{
		for (Node *p = head; p != NULL; p = p->next) 
		{
		xoasau(p->element);
		cout<<p->element;
		}
}

int main()
{
	SLink list;
	list.addfirst("vietnam");
	list.addfirst("Hanoi");
	list.removeFirst();
	return  0;
	cout<<xoasau("bacgiang");
}
