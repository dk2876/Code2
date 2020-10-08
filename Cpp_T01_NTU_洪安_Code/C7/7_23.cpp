#include <iostream>
using namespace std;

class Node{
      int data;
      Node * next;
      friend class LinkedList;
};

class LinkedList{
      Node * head;
      Node * tail;
public:
       LinkedList();
       Node *getnode();
       void freenode(Node *ptr);
       void insert(int value);
       void insert_node(Node *ptr, int value);
       void print();
};

LinkedList::LinkedList() {
           head = NULL;
           tail = NULL;
}

Node *LinkedList::getnode() {
     Node *ptr = new Node;
     if (ptr == NULL) {
             cout << "�O���餣��!!\n";
             exit(1);
     }
     return ptr;
}

void LinkedList::freenode(Node *ptr) {
     delete ptr;
}

void LinkedList::insert(int value) {
     if (head == NULL) {    //��C�O�Ū�
        head = getnode(); 
        head -> data = value;
        head -> next = NULL;
        tail = head;
     }
     else {  //��C���O�Ū�
          insert_node(tail, value); 
     }
}

void LinkedList::insert_node(Node *ptr, int value) {
     Node *new_node = getnode();
     new_node -> data = value;
     new_node -> next = NULL;
     
     if (ptr == NULL) { //�[�b��C��
        new_node -> next = head;
        head = new_node; 
     }
     else if (ptr == tail){     //�[�b��C�� ptr->next == NULL
          ptr -> next = new_node;
          tail = tail -> next;   //tail = new_node;
     }
     else {    //�[�b��C����
          new_node -> next = ptr -> next;
          ptr -> next = new_node; 
     }
}

void LinkedList::print() {
           Node * q = head;
           while (q != NULL) {
               cout << q -> data << " ";
               q = q -> next;
           }
           cout << endl;
}

int main() {
       
	LinkedList list;
	char c;
	int value;
	while (1) {
	      cout << "�п�Ji�ӷs�W���:" << endl;
	      fflush(stdin);
          cin >> c;
          if (c == 'i') {
                cout << "��J���J��Ƥ��e: ";
				fflush(stdin);
				cin >> value;
				list.insert(value);
          }
          else {
                break;
          }
    }
	list.print();
    
    system("pause");
    return 0;
}
