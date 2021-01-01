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
    int y ; //新增的data memeber
public:
	void sety(int n) { y = n ;} // 新增的member functions
	void showy() {cout << y << endl ; } //新增的functions
};


int main() {
	TwoDim td ;
	td.setx(5) ;  //基底類別
	td.sety(10) ; //衍生類別
	td.showx(); //基底類別
	td.showy() ; //衍生類別
	// try,  可乎?
	td.x = 10 ;  
    td.y  = 20 ;
	system("pause");
    return 0;
}

