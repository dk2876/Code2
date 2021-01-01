#include <iostream>
using namespace std;

class B{
	int i  ; 	//ÄÝ©Ê
public: 		// °Ê§@
	void set_i(int n) { i = n;}
	int get_i() { return i; }
};

class D: public B { 

} ;

int main() {
	D ob ;
	ob.set_i(10) ;
	cout << ob.get_i() <<endl ;
	
    system("pause");
    return 0;
}
