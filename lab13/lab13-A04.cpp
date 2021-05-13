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
	void removeLast();
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
void SLink::removeLast()
{
	Node *k = head;
	while(k!=NULL)
	{
		if(k->next->next == NULL)
		{
			k->next = NULL;
			tail = k;
		}
		k = k->next;
	}
}
int main()
{
	SLink list;
	list.addfirst("vietnam");
	list.addfirst("hanoi");
	list.addfirst("saigon");
	list.removeLast();
	list.print();
}
