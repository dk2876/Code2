#include <iostream>
using namespace std;

class node
{
	private:
		int data;
 		node *next;
		friend class LinkedList;
};

class LinkedList
{
	public:
		LinkedList();
		void print();
	private:
		node *head;
		node *tail;
};

LinkedList::LinkedList()
{   
    node *p = new node;
    if ( p == NULL)
	{
		cout << "°O¾ÐÅé¤£¨¬" << endl;
		exit(1);
	}
	p->data = 10;
	p->next = NULL;
	head = p;
	tail = p;
}

void LinkedList::print()
{
	node *q = head;
	while (q != NULL) 
	{
		cout << q->data << " ";
		q = q->next; 
	}
	cout << endl;
}

int main() {
    
	LinkedList list;
	list.print();
    
    system("pause");
    return 0;
}
