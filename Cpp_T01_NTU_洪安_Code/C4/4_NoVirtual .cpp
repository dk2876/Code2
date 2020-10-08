#include <iostream>

using namespace std;


int main(){
	car c;
	benz b ;
	volvo v;
	
	demo(c);
	demo(b); 
	demo(v); 
    cout<<endl;
   
    c.move();
    b.move();
    v.move();
   
   system("pause");
   return 0;
}
