#include <iostream>
using namespace std;

class TwoDim {
	int x, y ;
public:
	void set(int a, int b) { x = a; y = b; }
    void show() { cout << x << " " << y ;}
};

class ThreeDim : public TwoDim{

}; 

int main() {
	ThreeDim point3D ;
	point3D.set(1,2,3) ;  //©I¥s½Öªºset()
	point3D.show() ;	//©I¥s½Öªºshow()
    return 0; 
}
