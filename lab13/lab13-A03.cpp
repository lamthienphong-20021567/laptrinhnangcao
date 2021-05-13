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
	SLink()
	{
		head = NULL;
	}
	~SLink(){
	delete head;}
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
int main()
{
	SLink list;
	list.addfirst("vietnam");
	list.addfirst("Hanoi");
	list.print();
}
