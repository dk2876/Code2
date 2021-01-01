#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class node
{
	private:
		int data;
 		node *next;
		friend class Stack;
};

class Stack {
      node *top;
public:
      Stack();
      void push(int value);
      int pop();
      void print();
};

Stack::Stack(){
    top=NULL;
}

//���|��ƪ��s�J
void Stack::push(int value)
{
	node *new_node;
	
	new_node = new node;
    if( new_node == NULL){ //�P�_�t�m�O�_���\
		cout << "�O����t�m����!\n";
		exit(-1);
	}
	new_node->data = value;
	new_node->next = top;
	top = new_node;
}

// ���|��ƪ����X 
int Stack::pop()
{
	int temp;
	node *ptr;

	if( top != NULL ) //�P�_���|�O�_���Ū�
	{
      //��stop, temp, stack����
      ptr = top;
      top = top->next;
      temp = ptr->data;
      free(ptr);
      return temp;
	}
	else 
		return -1;
}

void Stack::print() {
     cout << endl;
     int i=0;
     node *p = top;
     while (p != NULL) {
           cout << p->data << "\t";
           i++;
           if (i==5) {
                     cout << endl;
                     i = 0;
           }
           p = p->next;
     }
     cout << endl;
}

// �D�{��
int main()
{
	// �ŧi
	int card[52]={0};
	int pos;
	int i, temp;
	Stack s;
	
	// ��J
	srand(time(NULL));
	i=0;
	while(i!=52)
	{
		pos = rand()%52;
		if(card[pos]==0)
		{
			s.push(pos);
			card[pos]=1;
			i++;
		}
	}
	for(i=0; i<5; i++)
	{
		temp = s.pop();
		printf("[%c%2d] ", temp/13+3, temp%13+1);
		temp = s.pop();
		printf("[%c%2d] ", temp/13+3, temp%13+1);
		temp = s.pop();
		printf("[%c%2d] ", temp/13+3, temp%13+1);
		temp = s.pop();
		printf("[%c%2d] ", temp/13+3, temp%13+1);
		printf("\n");
	}
	s.print();
    system("pause");
	return 0;
}
