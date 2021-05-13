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
	void insertAfter(Node*p,const char*s);
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
void SLink::insertAfter(Node *p,const char *s)
{
	Node *newnode = new Node;
	newnode->element = s;
	newnode->next = p->next;
	p->next = newnode;
}
int main()
{
	Node* head;
	SLink list;
	list.addfirst("saigon");
	list.addfirst("hanoi");
	list.addfirst("vietnam");
	list.insertAfter(head,"danang");
	list.print();
}
