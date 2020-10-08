#include <iostream>
using namespace std;

void print(const char * str, int width);    //#1
void print(double d, int width);            //#2
void print(long l, int width);              //#3
void print(int i, int width);               //#4
void print(const char * str);               //#5

int main() {
    print("Pancakes", 15);
    print("Syrup");
    print(1999.0,10);
    print(1999,12);
    print(1999L,15);
    
    system("pause");
    return 0;
}

void print(const char * str, int width){    //#1
     cout << "#1 is used!" << endl;
}
void print(double d, int width){            //#2
     cout << "#2 is used!" << endl;
}
void print(long l, int width){              //#3
     cout << "#3 is used!" << endl;
}
void print(int i, int width){               //#4
     cout << "#4 is used!" << endl;
}
void print(const char * str){               //#5
     cout << "#5 is used!" << endl;
}
