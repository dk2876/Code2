#include <iostream>
using namespace std;

int main()
{
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;   //C++��J 
    cout << "Here are two more. ";   //���ܨϥΪ̿�J 
    carrots = carrots+2;
    cout << "Now you have " << carrots << " carrots." << endl;  //��X���G 
    
    system("PAUSE");
    return 0;
}

