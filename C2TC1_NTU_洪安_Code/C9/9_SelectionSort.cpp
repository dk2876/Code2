#include <iostream>
using namespace std;

void SSort(int n[], int size) {
    int i, j, tmp, min; 
    
    for( i=0; i<(size-1); i++) {
          min = i;	
          for(j=i+1; j<=(size-1); j++) // ��X�̤p��
               if(n[j] < n[min]) 
                     min = j; 
           // ��̤p�ȸ�� i �Ӱ��洫
           if (min != i) {
               tmp = n[i];
               n[i] = n[min];
               n[min] = tmp;
           }             
    }
    for (i=0;i<size;i++) {
        cout << n[i] << " ";
    }
    cout << endl;
}

int main() {
    int i; 
    int n[6];  // ���ƧǪ����
    
    for( i=0; i<6; i++) {
          cout << "��" << i+1 << "����J:";
          cin >> n[i];
          SSort(n, i+1);
    }
    system("pause");
    return 0;
}
