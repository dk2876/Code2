#include <iostream>
using namespace std;

class OneDim{
	int x ;
public:
	void setx(int n) { x = n ;}
	void showx() {cout << x << endl ; }
} ;

class TwoDim: public OneDim {
	int y;
public:
	void setxy(int a, int b) {
         setx(a); 
         //x = a;
         y = b ;
    }
	void showxy() { 
         showx(); 
         //cout << x << endl;
         cout << y << endl; 
    }
} ;

int main() {
	TwoDim td ;
	
	td.setxy(5,10);  //�����O
	td.showxy(); //�l�����O
	
	system("pause");
	return 0;
}
