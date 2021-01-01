#include <iostream>

using namespace std;

class base { 
	int x ; 
public: 
	void setx(int n) { x=n;} 
} ;
class derived: public base {
	int y ;
public:
	void setx(int n) { base::setx(3*n);}
	void sety(int n) { y = n;}
} ;

int main() {

	
	base *pb ;
	base b;  
	derived d ;
	

   system("pause");
   return 0;
} 
