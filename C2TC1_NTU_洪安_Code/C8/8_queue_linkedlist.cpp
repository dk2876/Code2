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
      void printQueue(int input[], int output[], int i_count, int o_count);
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
		cout<<"�O����t�m����!\n";
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

void Queue::printQueue(int input[], int output[], int i_count, int o_count)
{
	int i, temp;

	cout<<"��J��C�����e: ";
	for(i=0; i<i_count; i++)
		cout<<"["<<input[i]<<"] ";
    cout<<endl;

	cout<<"���X��C�����e: ";
	for(i=0; i<o_count; i++)
		cout<<"["<<output[i]<<"] ";
    cout<<endl;

	cout<<"�ѤU��C�����e: ";
	while( (temp = dequeue()) != -1 )
		cout<<"["<<temp<<"] ";
    cout<<endl;
}

int main()
{
	int input[100]; // �x�s��J���
	int output[100]; // �x�s��X���
	int select; // �x�s��J�ﶵ
	int i_count=0; // �}�Cinput������
	int o_count=0; // �}�Coutput������
	int loop=-1; // �j������
	int temp;
	Queue q;

	while(loop)
	{
		cout<<"(1)��J (2)���X (3)�L�X�Ҧ����e�õ��� ==> ";
		cin>>select;
		switch(select)
		{
			case 1: // ��J
				cout<<"�п�J�s�J��C���� ("<<i_count+1<<") ==> ";
				cin>>temp;
				if(q.enqueue(temp)==-1)
					cout<<"��C�w��\n";
				else
				    input[i_count++] = temp;
				break;
			case 2: // ���X
				if( (temp = q.dequeue()) == -1 )
					cout<<"��C�O�Ū�\n";
				else
				{
					cout<<"���X��C���e: "<<temp<<endl;
					output[o_count++] = temp;
				}
				break;
			case 3: // �L�X�Ҧ����e�õ���
				q.printQueue(input, output, i_count, o_count);
				loop = 0;
				break;
		}
	}	
    system("pause");
    return 0;
}
