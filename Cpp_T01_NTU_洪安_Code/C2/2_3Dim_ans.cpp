#include <iostream>
using namespace std;


class TwoDim {
	int x, y ;
public:
	void set2(int a, int b) { x = a; y = b; }
    void show() { cout << x << " " << y ;}
};
class ThreeDim : public TwoDim{
      int z;
public:
      void set(int a, int b, int c) {
           TwoDim::set2(a, b); 
           z = c;
      }           
      void show() {
           TwoDim::show();
           cout << " " << z << endl;
      }
}; 

int main() {
	ThreeDim point3D ;
	point3D.set2(1,2) ;  //©I¥s½Öªºset()
	point3D.show() ;	//©I¥s½Öªºshow()
    system("pause");
    return 0; 
}
