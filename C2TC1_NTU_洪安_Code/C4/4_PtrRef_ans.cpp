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
	void setx(int n) {cout << "using setx()_d" << endl;  base::setx(3*n);}
	void sety(int n) { y = n;}
} ;

int main() {
	
    base *pb ;
	base b;  derived d ;
	cout << endl << "pb=&d" << endl;
	//pb = &b ; // Sure!
	//pb->setx(5) ;

	pb = &d ; // �i�H��?
	pb->setx(5) ; // �������?
	//pb->sety(10); // ?
	
	cout << endl << "pd = (derived *) &b" << endl;
	derived *pd ;
	pd = (derived *) &b ; // ???
	pd->setx(5) ; // ?
    pd->sety(8);
    
    cout << endl << "base &refb2 = d " << endl;
    base &refb1 = b ; 	//refb1.setx(5) ; // ����?
	base &refb2 = d ; //�i�H��?
	refb2.setx(5) ;
	//refb2.sety(10); //�������?
 
    cout << endl << "derived &refd1 = (derived &) b  " << endl;
	//derived &refd1 = b ;   //�i�H��?
    derived &refd1 = (derived &) b ; 
	refd1.setx(5) ;  //�������?

   system("pause");
   return 0;
} 
