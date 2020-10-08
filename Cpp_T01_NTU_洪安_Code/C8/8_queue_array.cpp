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
		if( size == MAX_SIZE ) // �ˬd��C�O�_�w��
			return -1;
	}
    //��s�ܼ�rear, size
    rear++;
	size++;
	if(rear==MAX_SIZE) // �ˬd�O�_�W�L�ɭ�
		rear = 0; // ���Y�}�l
	queue[rear] = value; // �s�J��C
	return 1;
}

int Queue::dequeue()
{
	int temp;

	if(size == 0) // �ˬd��C�O�_�O�Ū�
		return -1;
    //��s�ܼ�front, size
    front++;
	size--;
	if(front==MAX_SIZE) // �ˬd�O�_�W�L�ɭ�
		front = 0; // ���Y�}�l
	temp = queue[front];
	return temp;  // ���X��C���
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
		cout<<"(1)��J (2)���X (3)�L���X�Ҧ����e�õ��� ==> ";
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
			case 3: // �L���X�Ҧ����e�õ���
				q.printQueue(input, output, i_count, o_count);
				loop = 0;
				break;
		}
	}
   system("pause");
   return 0;
}
