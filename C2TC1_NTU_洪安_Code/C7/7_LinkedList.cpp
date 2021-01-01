#include <iostream>
using namespace std;

class Node{
      int data;
      Node * next;
      friend class LinkedList;
};

class LinkedList{
      Node * head;   //指到串列首 
      Node * tail;   //指到串列尾 
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

LinkedList::LinkedList() {    //建立一個空串列 
           head = NULL;
           tail = NULL;
}

Node *LinkedList::getnode() {  /* 此函數產生一個新節點 */
     Node *ptr = new Node;
     if (ptr == NULL) {
             cout << "記憶體不足!!\n";
             exit(1);
     }
     return ptr;
}

void LinkedList::freenode(Node *ptr) {   /* 此函數將節點還給記憶體 */
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
     Node *new_node = getnode();  /* 建立新節點,取得一個可用節點 */
     new_node -> data = value;    /* 建立節點內容 */
     new_node -> next = NULL;     /* 設定指標初值 */
     
     if (ptr == NULL) {           /* 第一種情況: 插入第一個節點 */
        new_node -> next = head;  /* 新節點成為串列開始 */
        head = new_node; 
     }
     else if (ptr == tail){       /* 第二種情況: 插入最後一個節點 */
          ptr -> next = new_node; /* 最後指向新節點 */
          tail = tail -> next;   //tail = new_node;
     }
     else {    /* 第三種情況: 插入成為中間節點 */
          new_node -> next = ptr -> next;     /* (3) 新節點指向下一節點 (3)*/
          ptr -> next = new_node;               /* 節點ptr指向新節點 (4)*/
     }
}

void LinkedList::remove_node(Node *ptr) {
     if (ptr == head) {                 /* 第一種情況: 刪除第一個節點 */ 
             head = head -> next;
     }
     else {
             //尋找ptr的前一個節點 
             Node *prev = head;   /* 指向前一節點 */
             while (prev -> next != ptr) {      
                   prev = prev -> next;  /* 最後一個節點 */
             }
             /* 第二種情況: 刪除最後一個節點 */
             if (ptr == tail) {
                     prev -> next = NULL;
                     tail = prev;
             }
             /* 第三種情況: 刪除中間節點 */
             else {
                  prev -> next = ptr ->next; /* 圖(3)之步驟(1) */
             }
     }
     freenode(ptr);    /* 此函數將節點歸還給記憶體 */
}

void LinkedList::remove(int value) {
     //找node其資料和value相同 
     Node * ptr = head;
     while (ptr != NULL) {
           if (ptr -> data == value) break;
           ptr = ptr -> next;
     }
     //找到 
     if (ptr != NULL) {
             
             remove_node(ptr); 
             
             if (head == NULL) {     //串列是空的 
                 tail = NULL; 
             } 
     }
     //沒找到 
     else {
          cout << "無此資料!!\n";
     }
}

void LinkedList::find(int num) {
     Node *ptr = head;
     while (ptr!=NULL) {  /* 走訪串列 */
           if (ptr -> data == num) {    //找到節點其資料和num相同 
                   cout << "找到節點資料: " << ptr->data << endl;
                   break;
           }
           ptr = ptr->next;               /* 指向下一節點 */
     }
     if (ptr == NULL) cout << "沒有此資料!\n"; 
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
	      cout << "i:新增資料" << endl;
	      cout << "d:刪除資料" << endl;
	      cout << "f:尋找資料" << endl;
	      cout << "l:印出串列內容" << endl;
	      cout << "q:離開" << endl;
	      cout << "請輸入: ";
	      fflush(stdin);
          cin >> c;
          switch (c) {
                 case 'i':
                      cout << "輸入插入資料內容: ";
				      fflush(stdin);
				      cin >> value;
				      list.insert(value);
				      break;
	              case 'd':
                      cout << "輸入刪除資料內容: ";
				      fflush(stdin);
				      cin >> value;
				      list.remove(value); 
				      break;
	              case 'f':
                      cout << "輸入尋找資料內容: ";
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
                      cout << "輸入不正確!!\n";
          }
    }
      
    system("pause");
    return 0;
}
