#include <iostream>
using namespace std;

int main()
{
   int integer1;
   
   cout << "Enter first number\n";
   
   //�s�J�ܼ�integer1
   cin >> integer1;
   
   int integer2, sum;
   
   cout << "Enter second integer\n";
   
   //�s�J�ܼ�integer2
   cin >> integer2;
   
   //��Ƭۥ[�s�J�ܼ�sum
   sum = integer1 + integer2;
   
   //�L�X��Ƭۥ[�����G  "The sum is 10 !!"
   cout << "The sum is " << sum << " !!" << endl;
    
   system("PAUSE");
   return 0;
}

