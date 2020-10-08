#include <iostream>
using namespace std;

class Base {
private:
	int a ;
protected:
	int b;
public:
	int c;
};

class Derived: private Base {
public:
	void set_a(int aa){a=aa;};
	void set_b(int bb){b=bb;};
	void set_c(int cc){c=cc;};

};

int main() {
	Derived d ;
	d.set_a(10);
	d.set_b(15);
	d.set_c(20);

	d.a=100;
	d.b=150;
	d.c=200;

    return 0;
}
