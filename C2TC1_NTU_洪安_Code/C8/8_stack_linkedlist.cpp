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

//堆疊資料的存入
void Stack::push(int value)
{
	node *new_node;
	
	new_node = new node;
    if( new_node == NULL){ //判斷配置是否成功
		cout << "記憶體配置失敗!\n";
		exit(-1);
	}
	new_node->data = value;
	new_node->next = top;
	top = new_node;
}

// 堆疊資料的取出 
int Stack::pop()
{
	int temp;
	node *ptr;

	if( top != NULL ) //判斷堆疊是否為空的
	{
      //更新top, temp, stack指標
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

// 主程式
int main()
{
	// 宣告
	int card[52]={0};
	int pos;
	int i, temp;
	Stack s;
	
	// 輸入
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
