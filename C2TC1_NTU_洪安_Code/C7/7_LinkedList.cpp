#include <iostream>
using namespace std;

class Node{
      int data;
      Node * next;
      friend class LinkedList;
};

class LinkedList{
      Node * head;   //�����C�� 
      Node * tail;   //�����C�� 
public:
       LinkedList();
       Node *getnode();
       void freenode(Node *ptr);
       void insert(int value);
       void insert_node(Node *ptr, int value);
       void remove_node(Node *ptr);
       void remove(int value);
       void find(int num);
       void print();
};

LinkedList::LinkedList() {    //�إߤ@�ӪŦ�C 
           head = NULL;
           tail = NULL;
}

Node *LinkedList::getnode() {  /* ����Ʋ��ͤ@�ӷs�`�I */
     Node *ptr = new Node;
     if (ptr == NULL) {
             cout << "�O���餣��!!\n";
             exit(1);
     }
     return ptr;
}

void LinkedList::freenode(Node *ptr) {   /* ����ƱN�`�I�ٵ��O���� */
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
     Node *new_node = getnode();  /* �إ߷s�`�I,���o�@�ӥi�θ`�I */
     new_node -> data = value;    /* �إ߸`�I���e */
     new_node -> next = NULL;     /* �]�w���Ъ�� */
     
     if (ptr == NULL) {           /* �Ĥ@�ر��p: ���J�Ĥ@�Ӹ`�I */
        new_node -> next = head;  /* �s�`�I������C�}�l */
        head = new_node; 
     }
     else if (ptr == tail){       /* �ĤG�ر��p: ���J�̫�@�Ӹ`�I */
          ptr -> next = new_node; /* �̫���V�s�`�I */
          tail = tail -> next;   //tail = new_node;
     }
     else {    /* �ĤT�ر��p: ���J���������`�I */
          new_node -> next = ptr -> next;     /* (3) �s�`�I���V�U�@�`�I (3)*/
          ptr -> next = new_node;               /* �`�Iptr���V�s�`�I (4)*/
     }
}

void LinkedList::remove_node(Node *ptr) {
     if (ptr == head) {                 /* �Ĥ@�ر��p: �R���Ĥ@�Ӹ`�I */ 
             head = head -> next;
     }
     else {
             //�M��ptr���e�@�Ӹ`�I 
             Node *prev = head;   /* ���V�e�@�`�I */
             while (prev -> next != ptr) {      
                   prev = prev -> next;  /* �̫�@�Ӹ`�I */
             }
             /* �ĤG�ر��p: �R���̫�@�Ӹ`�I */
             if (ptr == tail) {
                     prev -> next = NULL;
                     tail = prev;
             }
             /* �ĤT�ر��p: �R�������`�I */
             else {
                  prev -> next = ptr ->next; /* ��(3)���B�J(1) */
             }
     }
     freenode(ptr);    /* ����ƱN�`�I�k�ٵ��O���� */
}

void LinkedList::remove(int value) {
     //��node���ƩMvalue�ۦP 
     Node * ptr = head;
     while (ptr != NULL) {
           if (ptr -> data == value) break;
           ptr = ptr -> next;
     }
     //��� 
     if (ptr != NULL) {
             
             remove_node(ptr); 
             
             if (head == NULL) {     //��C�O�Ū� 
                 tail = NULL; 
             } 
     }
     //�S��� 
     else {
          cout << "�L�����!!\n";
     }
}

void LinkedList::find(int num) {
     Node *ptr = head;
     while (ptr!=NULL) {  /* ���X��C */
           if (ptr -> data == num) {    //���`�I���ƩMnum�ۦP 
                   cout << "���`�I���: " << ptr->data << endl;
                   break;
           }
           ptr = ptr->next;               /* ���V�U�@�`�I */
     }
     if (ptr == NULL) cout << "�S�������!\n"; 
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
          cout << endl;
	      cout << "i:�s�W���" << endl;
	      cout << "d:�R�����" << endl;
	      cout << "f:�M����" << endl;
	      cout << "l:�L�X��C���e" << endl;
	      cout << "q:���}" << endl;
	      cout << "�п�J: ";
	      fflush(stdin);
          cin >> c;
          switch (c) {
                 case 'i':
                      cout << "��J���J��Ƥ��e: ";
				      fflush(stdin);
				      cin >> value;
				      list.insert(value);
				      break;
	              case 'd':
                      cout << "��J�R����Ƥ��e: ";
				      fflush(stdin);
				      cin >> value;
				      list.remove(value); 
				      break;
	              case 'f':
                      cout << "��J�M���Ƥ��e: ";
				      fflush(stdin);
				      cin >> value;
				      list.find(value);
				      break;
                  case 'l':
                      list.print();
                      break;
                  case 'q':
                      system("pause");
                      return 0;
                  default:
                      cout << "��J�����T!!\n";
          }
    }
      
    system("pause");
    return 0;
}
