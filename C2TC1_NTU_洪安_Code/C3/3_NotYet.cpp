#include <iostream>
using namespace std;

class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);

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



void Coord::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}


int main() {
	Coord o1(10,10), o2(5,3), o3 ;
	o3.set(o1.add(o2));  // o3 = o1 + o2 ; 
	o3.print() ; //later, you can use cout << o3 ;

   system("pause");
   return 0;
}
