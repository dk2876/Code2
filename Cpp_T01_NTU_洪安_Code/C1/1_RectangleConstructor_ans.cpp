#include <iostream>
using namespace std;

//---------����--------------
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

//---------�갵---------------

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

//--------�D�{��---------------
int main()
{
   Rectangle r1(10,20),r2;
   
   //�L�X�w�]���n
   int Area;
   Area = r1.printArea();
   cout << "r1 is " << Area << endl;
   Area = r2.printArea();
   cout << "r2 is " << Area << endl;
   
   int mylength;

   //�ϥΪ̿�J��
   cout << "�п�J��" << endl;
   //�s�J��
   cin >> mylength;
   //�]�w��
   r1.setLength(mylength);
   

   int mywidth;

   //�ϥΪ̿�J��
   cout << "�п�J�e" << endl;
   //�s�J�e
   cin >> mywidth;
   //�]�w�e
   r1.setWidth(mywidth);
   

   
   //�L�X���n
   
   Area=r1.printArea();
   cout << "The rectangle area is " << Area <<endl;
   
   system("pause");
   return 0;
} 

//-----------------------------

