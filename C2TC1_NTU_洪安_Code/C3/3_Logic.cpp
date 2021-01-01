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
	Coord o1(10,10), o2(3,5), o3;
	
	if (o1==o2)
		cout<<"o1==o2"<<endl;
	else
		cout<<"o1!=o2"<<endl;
   system("pause");
   return 0;
}
