#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);
	Coord operator+(Coord); 
	Coord operator=(Coord);
	void print();
} ;

Coord::Coord()
{
}
Coord::Coord(int a,int b)
{
	x=a;
	y=b;
}
Coord Coord::operator+(Coord c) {
		Coord temp ;
		temp.x = this->x + c.x ; 
		temp.y = this->y + c.y ;
		return temp ;
}


Coord Coord::operator=(Coord c)
{ 
		this->x = c.x; 
		this->y=c.y;
		return *this;

}


void Coord::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}


int main() {
	Coord o1(10,10), o2(5,3), o3(3,2),o4,o5 ;
	o5=o4=o1+o2+o3;  // o3 = o1 + o2 ; 
	o4.print();
	o5.print() ; //later, you can use cout << o3 ;
	system("pause");
    return 0;
}
