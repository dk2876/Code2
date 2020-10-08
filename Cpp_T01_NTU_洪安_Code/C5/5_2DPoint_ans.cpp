#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <class T>
class point{
	T x, y ;
public:
	point(T a, T b) { x = a; y=b;}
	void print() { cout << x << " " << y ; }
};

int main() {
	point<double> p1(3.5, 6.3) ;
	point<int> p2(3, 9) ;

	p1.print();
	cout<<endl;
	p2.print();
	cout<<endl;
	system("pause");
	return 0;
}
