#include <iostream>
using namespace std;

class TwoDim {
	
	int x, y ;
public:
	void setxy(int a, int b) { x = a; y = b; }
    void show() { cout << x << " " << y ;}
};
class ThreeDim : public TwoDim{
	int z;
public:

	void show() { TwoDim::show(); cout << " "<< z ;}
}; 

int main() {
	ThreeDim point3D ;
	point3D.setxyz(1,2,3) ;  //©I¥s½Öªºset()
	point3D.show() ;	//©I¥s½Öªºshow() 
	system("pause");
	return 0;
}

