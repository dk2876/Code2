#include <iostream>
using namespace std;

//---------���O�ŧi--------------
class Rectangle{

public:   
      void setLength( int l);
      void setWidth( int w);
      int printArea();
private:
        int length;
        int width;
}; 

//----------------------------

//---------������ƹ갵---------------

void Rectangle::setLength( int l)
{
   //�N�Ѽ�l�s�J�p�H��Ʀ���Length
   length = l;
} 

void Rectangle::setWidth( int w)
{
   //�N�Ѽ�w�s�J�p�H��Ʀ���Width
   width = w;
} 

int Rectangle::printArea()
{  
   //�^��Length*Width
   return (length*width);
} 

//-----------------------------

//--------�D�{��---------------
int main()
{
   Rectangle r;
   int mylength;

   //���ܨϥΪ̿�J��
   cout << "Please input length:";
   //�s�J��
   cin >> mylength;
   //�]�w��
   r.setLength(mylength);

   int mywidth;

   //���ܨϥΪ̿�J�e 
   cout << "please input width:";
   //�s�J�e
   cin >> mywidth;
   //�]�w�e
   r.setWidth(mywidth);
   
   int Area;
   
   //�L�X���n
   Area = r.printArea();
   cout << "Area: " << Area << endl;

   system("PAUSE");
   return 0;
} 

//-----------------------------

