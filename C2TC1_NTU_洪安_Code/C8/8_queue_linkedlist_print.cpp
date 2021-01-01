#include <iostream>
#include <stdlib.h>
using namespace std;

class node {
	int data;
	node *next;
	friend class Queue;
};

class Queue {
      node *front;
      node *rear;
public:
      Queue();
      int enqueue(int value);
      int dequeue();
      void print();
};

Queue::Queue() {
               front = NULL;
               rear = NULL;
}

int Queue::enqueue(int value)
{
	node *new_node;

	new_node = new node;
	if( new_node==NULL )
	{
		cout<<"記憶體配置失敗!\n";
		exit(-1);
	}
	new_node->data = value;
	new_node->next = NULL;
	if(rear==NULL)
		front = new_node;
	else
		rear->next = new_node;
	rear = new_node;
	return 1;
}

int Queue::dequeue()
{
	node *top;
	int temp;

	if(front != NULL)
	{
		top = front;
		front = front->next;
		if (front == NULL) {
                  rear = NULL;
        }
		temp = top->data;
		free(top);
		return temp;
	}
	else
		return -1;
}

void Queue::print() {
     node *p = front;
     while (p != NULL) {
           cout << p->data << " ";
           p = p->next;
     }
     cout << endl;
}

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(25);
	q.print();
	q.dequeue();
	q.print();

    system("pause");
    return 0;
}
