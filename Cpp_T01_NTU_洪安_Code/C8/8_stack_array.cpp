#include <iostream>
#include <time.h>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
       int stack[MAX_SIZE];
       int top;
public:
       Stack();
       void push(int value);
       int pop();
       void print();
};

Stack::Stack() {
    top = -1;
}

void Stack::push(int value)
{
	if( top >= (MAX_SIZE-1) )
	{
		cout<<"���|�e�q�W�L!\n";
		exit(-1);
	}
	//��s�ܼ�top
    top++;
	stack[top] = value;
}

int Stack::pop()
{
	int temp;

	if( top<0 ) //�P�_���|�O�_���Ū�
	{
		cout<<"���|�e�q���Ū�!\n";
		return -1;
	}
   temp = stack[top];
	//��s�ܼ�top
    top--;	
	return temp;
}
void Stack::print() {
     cout << endl;
     for (int i=0;i<=top;i++) {  
         if (i%5 == 0) {
                 cout << endl;
         }
         cout << stack[i] << "\t";
     }
     cout << endl;
}

int main() {
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
