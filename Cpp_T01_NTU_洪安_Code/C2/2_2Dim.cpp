#include <iostream>
#include <stdlib.h>
using namespace std;

class OneDim{
	int x ;
public:
	void setx(int n) { x = n ;}
	void showx() {cout << x <<endl ; }
};


class TwoDim: public OneDim{
    int y ; //�s�W��data memeber
public:
	void sety(int n) { y = n ;} // �s�W��member functions
	void showy() {cout << y << endl ; } //�s�W��functions
};


int main() {
	TwoDim td ;
	td.setx(5) ;  //�����O
	td.sety(10) ; //�l�����O
	td.showx(); //�����O
	td.showy() ; //�l�����O
	// try,  �i�G?
	td.x = 10 ;  
    td.y  = 20 ;
	system("pause");
    return 0;
}

