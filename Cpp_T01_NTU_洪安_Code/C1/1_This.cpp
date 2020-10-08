#include <iostream>
using namespace std;

//---------����--------------
class Rectangle {

public:

   Rectangle &setLength(int);
   Rectangle &setWidth (int);
   int getLength();
   int getWidth();   
   int printArea();         
private:
   int length;     
   int width;   

}; 

//----------------------------

//---------�갵---------------

Rectangle &Rectangle::setLength( int l)
{
   length=l;
   return *this;

} 

Rectangle &Rectangle::setWidth( int w)
{
   width=w;
   return *this;

} 


int Rectangle::getLength()
{
	return length;
}

int Rectangle::getWidth()
{
	return width;
}




int Rectangle::printArea()
{
   
   return (length*width);
   

} 


//-----------------------------

//--------�D�{��---------------
int main()
{
   Rectangle r;

   r.setLength(50).setWidth(40);
   
   cout<<"r's length  is " <<r.getLength() <<endl;
   cout<<"r's width  is " <<r.getWidth() <<endl;

   system("pause");
   return 0; 

} 

//-----------------------------

