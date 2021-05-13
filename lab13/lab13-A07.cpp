#include<iostream>
#include<cstring>
using namespace std;
struct DNode {
const char* element;
DNode *next, *prev; // Pointers to next and previous node
/* Initialize a node. */
DNode(const char* e = NULL, DNode* p = NULL, DNode *n = NULL)
{
element = e;
prev = p;
next = n;
}
};
struct DList {
DNode header, trailer;// sentinels
/* Default constructor that creates an empty list */
DList() {
header.next = &trailer;
trailer.prev = &header;}
void addfirst(const char*s);
void print();
};
void DList::addfirst(const char*s)
{
	DNode *newnode = new DNode;
	newnode->element = s;
	newnode->next->prev = header;
	header = newnode;
}
DNode insertAfter(DNode* p, const char* s) {
DNode* newNode = new DNode(s, p, p->next);
p->next->prev = newNode;
p->next = newNode;
return newNode;}
void DList::print()
{
	for (Node *p = header; p != NULL; p = p->next) 
    cout << p->element<<".";
}
int main()
{
	DList list;
	list.addfirst("viet");
	list.addfirst("nam");
	list.print();
	
}
