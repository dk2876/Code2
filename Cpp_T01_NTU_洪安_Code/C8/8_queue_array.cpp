#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class Queue {
      int queue[MAX_SIZE];
      int front;
      int rear;
      int size;
public:
      Queue();
      int enqueue(int value);
      int dequeue();
      void printQueue(int input[], int output[], int i_count, int o_count);
};

Queue::Queue() {
    front = -1;
    rear = -1;
    size = 0;
}

int Queue::enqueue(int value)
{
    
	if(rear != -1)
	{
		if( size == MAX_SIZE ) // 檢查佇列是否已滿
			return -1;
	}
    //更新變數rear, size
    rear++;
	size++;
	if(rear==MAX_SIZE) // 檢查是否超過界限
		rear = 0; // 重頭開始
	queue[rear] = value; // 存入佇列
	return 1;
}

int Queue::dequeue()
{
	int temp;

	if(size == 0) // 檢查佇列是否是空的
		return -1;
    //更新變數front, size
    front++;
	size--;
	if(front==MAX_SIZE) // 檢查是否超過界限
		front = 0; // 重頭開始
	temp = queue[front];
	return temp;  // 取出佇列資料
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
		cout<<"(1)輸入 (2)取出 (3)印內出所有內容並結束 ==> ";
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
			case 3: // 印內出所有內容並結束
				q.printQueue(input, output, i_count, o_count);
				loop = 0;
				break;
		}
	}
   system("pause");
   return 0;
}
