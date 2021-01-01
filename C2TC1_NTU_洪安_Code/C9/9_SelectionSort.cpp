#include <iostream>
using namespace std;

void SSort(int n[], int size) {
    int i, j, tmp, min; 
    
    for( i=0; i<(size-1); i++) {
          min = i;	
          for(j=i+1; j<=(size-1); j++) // 找出最小值
               if(n[j] < n[min]) 
                     min = j; 
           // 把最小值跟第 i 個做交換
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
    int n[6];  // 欲排序的資料
    
    for( i=0; i<6; i++) {
          cout << "第" << i+1 << "次輸入:";
          cin >> n[i];
          SSort(n, i+1);
    }
    system("pause");
    return 0;
}
