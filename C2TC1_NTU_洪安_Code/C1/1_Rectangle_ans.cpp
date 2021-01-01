#include <iostream>
using namespace std;

//---------類別宣告--------------
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

//---------成員函數實做---------------

void Rectangle::setLength( int l)
{
   //將參數l存入私人資料成員Length
   length = l;
} 

void Rectangle::setWidth( int w)
{
   //將參數w存入私人資料成員Width
   width = w;
} 

int Rectangle::printArea()
{  
   //回傳Length*Width
   return (length*width);
} 

//-----------------------------

//--------主程式---------------
int main()
{
   Rectangle r;
   int mylength;

   //提示使用者輸入長
   cout << "Please input length:";
   //存入長
   cin >> mylength;
   //設定長
   r.setLength(mylength);

   int mywidth;

   //提示使用者輸入寬 
   cout << "please input width:";
   //存入寬
   cin >> mywidth;
   //設定寬
   r.setWidth(mywidth);
   
   int Area;
   
   //印出面積
   Area = r.printArea();
   cout << "Area: " << Area << endl;

   system("PAUSE");
   return 0;
} 

//-----------------------------

