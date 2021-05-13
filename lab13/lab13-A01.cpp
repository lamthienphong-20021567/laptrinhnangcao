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
};
struct Slink
{
	Node* head;
	Node* tail;
	Slink()
	{
		head = NULL;
		tail = NULL;
	}
	void addlast(const char* s);
	void print();
};
void SLink::addfirst(const char* s)
{
	Node* newNode = new Node;
    newNode->element = s;
    newNode->next = head;
    head = newNode;
}
void Slink::addlast(const char* s)
{
  Node* newNode = new Node(s, NULL); 
if (head == NULL) head = newNode; 
else tail->next = newNode;
tail = newNode;	
}
void SLink::print()
{
	for (Node *p = head; p != NULL; p = p->next) 
    cout << p->element << ".";
}
void Slink::print()
{
	for (Node *p = head; p != NULL; p = p->next) 
    cout << p->element << ".";
}
int main()
{
	SLink list;
	Slink list1;
	list.addfirst("Vietnam");
	list.print();
	list1.addlast("HaNoi");
	list1.print();
}
