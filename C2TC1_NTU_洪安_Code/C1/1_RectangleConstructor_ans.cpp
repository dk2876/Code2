#include <iostream>
using namespace std;

//---------介面--------------
class Rectangle {

public:
   Rectangle();
   Rectangle(int l, int w);

   void setLength(int);
   void setWidth (int);
   
   int printArea();         

private:
   int length;     
   int width;   
}; 

//----------------------------

//---------實做---------------

Rectangle::Rectangle() {
   length = 5;
   width = 10;
}

Rectangle::Rectangle(int l, int w) {
   length = l;
   width = w;  
}

void Rectangle::setLength( int l)
{
   length=l;

} 

void Rectangle::setWidth( int w)
{
   width=w;

} 

int Rectangle::printArea()
{
   
   return (length*width);
   

} 

//-----------------------------

//--------主程式---------------
int main()
{
   Rectangle r1(10,20),r2;
   
   //印出預設面積
   int Area;
   Area = r1.printArea();
   cout << "r1 is " << Area << endl;
   Area = r2.printArea();
   cout << "r2 is " << Area << endl;
   
   int mylength;

   //使用者輸入長
   cout << "請輸入長" << endl;
   //存入長
   cin >> mylength;
   //設定長
   r1.setLength(mylength);
   

   int mywidth;

   //使用者輸入長
   cout << "請輸入寬" << endl;
   //存入寬
   cin >> mywidth;
   //設定寬
   r1.setWidth(mywidth);
   

   
   //印出面積
   
   Area=r1.printArea();
   cout << "The rectangle area is " << Area <<endl;
   
   system("pause");
   return 0;
} 

//-----------------------------

