#include <iostream>
using namespace std;

template <class T1,class T2>
T1 add(T1 x, T2 y) { cout << "F1 "; return x+y ; }
int add(int x, int y) { cout << "F2 "; return x+y ;} 
int main() {
	cout << add(3.5,8) << endl ;
	system("pause");
	return 0;
}
