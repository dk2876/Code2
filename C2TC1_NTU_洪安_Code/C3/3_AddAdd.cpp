#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Coord {
	int x,y;

public:
	Coord();
	Coord(int, int);

	void operator=(Coord &);

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



void Coord::operator=(Coord &c)
{ 
		this->x = c.x; 
		this->y=c.y;
		

}



void Coord::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}


int main() {
	Coord o1(10,10),o2;

	cout<<"o1=";
	o1.print();

	cout<<"o2=o1++"<<endl;
	o2=o1++;
	cout<<"o2=";
	o2.print();
	cout<<"o1=";
	o1.print();

	cout<<"o2=++o1"<<endl;
	o2=++o1;
	cout<<"o2=";
	o2.print();
	cout<<"o1=";
	o1.print();
	
   system("pause");
   return 0;
}
