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
                   cout << "找到key " << key << ",陣列索引為" << middle << endl;
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
                cout << "未找到key" << key << "!!" << endl;
     }
}

int main() {
    int num[5];
    int key;
    for (int i=0;i<5;i++) {
        cout << "請輸入第" << i+1 << "個數字:";
        cin >> num[i]; 
    }
    
    int i, j, tmp, min; 
    
    for( i=0; i<(5-1); i++) {
          min = i;	
          for(j=i+1; j<=(5-1); j++) // 找出最小值
               if(num[j] < num[min]) 
                     min = j; 
           // 把最小值跟第 i 個做交換
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
    
    
    cout << "請輸入欲搜尋之數字:";
    cin >> key;
     
    BinarySearch(num,5,key);
    system("pause");
    return 0;
}
