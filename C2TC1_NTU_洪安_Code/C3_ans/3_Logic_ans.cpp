#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);   
    bool operator==(const Coord& ob2) ;
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

bool coord::operator==(const coord& ob2) {
	return (this->x==ob2.x) && (this->y==ob2.y);
}

void Coord::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}


int main() {
	Coord o1(10,10), o2(3,5), o3;
	
	if (o1==o2)
		cout<<"o1==o2"<<endl;
	else
		cout<<"o1!=o2"<<endl;
   system("pause");
   return 0;
}
