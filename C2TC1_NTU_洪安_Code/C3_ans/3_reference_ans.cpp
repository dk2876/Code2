#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);
	Coord operator+(const Coord &); 
	void operator=(const Coord &);
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
Coord Coord::operator+(const Coord & c) {
      Coord temp ;
		temp.x = x + c.x ; 
		temp.y = y + c.y ;
		return temp ;
}


void Coord::operator=(const Coord & c)
{ 

     x = c.x; y=c.y;
}


void Coord::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}


int main() {
	Coord o1(10,10), o2(5,3), o3;
	o3=o1+o2;  // o3 = o1 + o2 ; 
	o3.print(); //later, you can use cout << o3 ;
   system("pause");
   return 0;
}
