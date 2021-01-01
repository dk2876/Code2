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

void Queue::printQueue(int input[], int output[], int i_count, int o_count)
{
	int i, temp;

	cout<<"輸入佇列的內容: ";
	for(i=0; i<i_count; i++)
		cout<<"["<<input[i]<<"] ";
    cout<<endl;

	cout<<"取出佇列的內容: ";
	for(i=0; i<o_count; i++)
		cout<<"["<<output[i]<<"] ";
    cout<<endl;

	cout<<"剩下佇列的內容: ";
	while( (temp = dequeue()) != -1 )
		cout<<"["<<temp<<"] ";
    cout<<endl;
}

int main()
{
	int input[100]; // 儲存輸入資料
	int output[100]; // 儲存輸出資料
	int select; // 儲存輸入選項
	int i_count=0; // 陣列input之索引
	int o_count=0; // 陣列output之索引
	int loop=-1; // 迴路控制
	int temp;
	Queue q;

	while(loop)
	{
		cout<<"(1)輸入 (2)取出 (3)印出所有內容並結束 ==> ";
		cin>>select;
		switch(select)
		{
			case 1: // 輸入
				cout<<"請輸入存入佇列的值 ("<<i_count+1<<") ==> ";
				cin>>temp;
				if(q.enqueue(temp)==-1)
					cout<<"佇列已滿\n";
				else
				    input[i_count++] = temp;
				break;
			case 2: // 取出
				if( (temp = q.dequeue()) == -1 )
					cout<<"佇列是空的\n";
				else
				{
					cout<<"取出佇列內容: "<<temp<<endl;
					output[o_count++] = temp;
				}
				break;
			case 3: // 印出所有內容並結束
				q.printQueue(input, output, i_count, o_count);
				loop = 0;
				break;
		}
	}	
    system("pause");
    return 0;
}
