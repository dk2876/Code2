#include <iostream>
using namespace std;

class base { 
	int x ; 
public: 
	void setx(int n) {cout << "using setx()_b" << endl; x=n;}
} ;
class derived: public base {
	int y ;
public:
	void setx(int n) {cout << "using setx()_d" << endl; base::setx(3*n);}
	void sety(int n) { y = n;}
} ;
int  main() {
	base b1 ;
	derived d1 ;
	b1 = d1 ; // ¥i¥G?
	b1.setx(5) ;	// ­þ­Ósetx()
	//b1.sety(10); //?

    //d1 = b1;  // ?
	d1.setx(5) ; 
	d1.sety(8); // ?
	

	system("pause");
    return 0;
} 
