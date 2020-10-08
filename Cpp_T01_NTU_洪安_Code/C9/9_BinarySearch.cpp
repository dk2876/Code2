#include <iostream>
using namespace std;


void BinarySearch(int n[],int size,int key) {
     bool done=false;
     int low = 0;
     int up = size - 1;
     int middle;
     while (low<=up && !done) {
           middle = (low+up)/2;
           if (key == n[middle]) {
                   cout << "���key " << key << ",�}�C���ެ�" << middle << endl;
                   done = true;
           }
           else if (key < n[middle]) {
                up = middle-1;
           }
           else {
                low = middle+1;
           }
     }
     if (!done) {
                cout << "�����key" << key << "!!" << endl;
     }
}

int main() {
    int num[5];
    int key;
    for (int i=0;i<5;i++) {
        cout << "�п�J��" << i+1 << "�ӼƦr:";
        cin >> num[i]; 
    }
    
    int i, j, tmp, min; 
    
    for( i=0; i<(5-1); i++) {
          min = i;	
          for(j=i+1; j<=(5-1); j++) // ��X�̤p��
               if(num[j] < num[min]) 
                     min = j; 
           // ��̤p�ȸ�� i �Ӱ��洫
           if (min != i) {
               tmp = num[i];
               num[i] = num[min];
               num[min] = tmp;
           }             
    }
    for (i=0;i<5;i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    
    
    cout << "�п�J���j�M���Ʀr:";
    cin >> key;
     
    BinarySearch(num,5,key);
    system("pause");
    return 0;
}
