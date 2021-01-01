#include <iostream>
using namespace std;

//---------介面--------------
class Rectangle{

   
public:

   void setLength(int);
   void setWidth (int);
   void setPrice(int);
 
   int getLength();
   int getWidth();  
   int getPrice();
   int printArea();         

private:
   
   int Length;     
   int Width;
   static int Price; 


}; 

//----------------------------

//---------實做---------------

int Rectangle::Price=10;


void Rectangle::setPrice(int p)
{
	Price=p;
}


void Rectangle::setLength( int l)
{
   Length=l;

} 

void Rectangle::setWidth( int w)
{
   Width=w;

} 

int Rectangle::getPrice()
{
	return Price;
}


int Rectangle::getLength()
{
	return Length;
}

int Rectangle::getWidth()
{
	return Width;
}




int Rectangle::printArea()
{
   
   return (Length*Width);
   

} 


//-----------------------------

//--------主程式---------------
int main()
{
   Rectangle sq1,sq2;
   
   sq1.setPrice(100);
   cout<<"sq1's price is "<< sq1.getPrice()<<endl;
   
   sq2.setPrice(1000);
   cout<<"After sq2's price changing"<<endl;
   cout<<"sq1's price is "<< sq1.getPrice()<<endl;
   cout<<"sq2's price is "<< sq2.getPrice()<<endl;
 
  

 
   system("pause");
   return 0; 

} 

//-----------------------------

