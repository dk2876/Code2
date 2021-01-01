#include <iostream>
using namespace std;

class car {
public:
	void move() { cout << "car move" << endl;}
};

class Benz: public car {
public:
	void move() { cout << "Benz move" << endl;}
};

class Volvo: public car {
public:
	void move() { cout << "Volvo move" << endl;}
};

void demo(car &c) { c.move() ; }
 
int main() { 
    car c; 
    Benz b ;
    Volvo v; 
    demo(c); 
    demo(b); 
    demo(v) ;  
    system("pause"); 
    return 0;
}
