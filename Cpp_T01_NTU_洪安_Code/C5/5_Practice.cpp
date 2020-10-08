#include <iostream>
using namespace std;

template <class T>
T add(T x, T y) { cout << "F1 "; return x+y ; }
int add(int x, int y) { cout << "F2 "; return x+y ;} 
int main() {
	cout << add(3,8) << endl ;
	system("pause");
	return 0;
}
