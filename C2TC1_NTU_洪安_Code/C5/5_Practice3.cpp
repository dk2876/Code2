#include <iostream>
using namespace std;

template <class T>
T add(T x, T y) { cout << "F1 "; return x+y ; }

template <class T1,class T2>
T2 add(T1 x, T2 y) { cout << "F2 "; return x+y ; }
int main() {
	cout << add(3.5,8) << endl ;
	system("pause");
	return 0;
}
