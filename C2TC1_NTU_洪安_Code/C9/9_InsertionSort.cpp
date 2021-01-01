#include <iostream>
using namespace std;

void ISort(int n[], int size) {
     int key, i, j;
     for(i=1; i <= (size-1); i++) {
          key=n[i];
          for(j=i-1; j>=0 && n[j] > key; j--) {
              n[j+1] = n[j];
              for (int k=0;k<size;k++) {
                  cout << n[k] << " "; 
               } 
               cout << endl;
          }
              
          n[j+1] = key;
          
     }
     for (int k=0;k<size;k++) {
        cout << n[k] << " ";
     } 
     cout << endl;
}

int main() {
    int i; 
    int n[6];  // 欲排序的資料
    
    for( i=0; i<6; i++) {
          cout << "第" << i+1 << "次輸入:";
          cin >> n[i];
          ISort(n, i+1);
    }
    system("pause");
    return 0;
}
