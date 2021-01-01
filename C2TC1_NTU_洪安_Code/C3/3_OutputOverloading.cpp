#include <iostream>
using namespace std;
class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);
    Coord operator+(Coord c) { //­ìadd()
		Coord temp ;
		temp.x = this->x + c.x ; 
		temp.y = this->y + c.y ;
		return temp ;
	}
	void operator=(Coord c) { // ­ì set()
		this->x = c.x; this->y=c.y;
	}

} ;

Coord::Coord()
{
}
Coord::Coord(int a,int b)
{
	x=a;
	y=b;
}



int main() {
	Coord o1(10,10), o2(5,3), o3 ;
	o3=o1+o2;  // o3 = o1 + o2 ; 
	//o3.print() ; //later, you can use cout << o3 ;
	cout << o3 << endl;
    system("pause");
    return 0;
}
