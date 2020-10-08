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
             cout << "記憶體不足!!\n";
             exit(1);
     }
     return ptr;
}

void LinkedList::freenode(Node *ptr) {
     delete ptr;
}

void LinkedList::insert(int value) {
     if (head == NULL) {    //串列是空的
        head = getnode(); 
        head -> data = value;
        head -> next = NULL;
        tail = head;
     }
     else {  //串列不是空的
          insert_node(tail, value); 
     }
}

void LinkedList::insert_node(Node *ptr, int value) {
     Node *new_node = getnode();
     new_node -> data = value;
     new_node -> next = NULL;
     
     if (ptr == NULL) { //加在串列首
        new_node -> next = head;
        head = new_node; 
     }
     else if (ptr == tail){     //加在串列尾 ptr->next == NULL
          ptr -> next = new_node;
          tail = tail -> next;   //tail = new_node;
     }
     else {    //加在串列中間
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
	      cout << "請輸入i來新增資料:" << endl;
	      fflush(stdin);
          cin >> c;
          if (c == 'i') {
                cout << "輸入插入資料內容: ";
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
