#include <iostream>
using namespace std;

int main()
{
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;   //C++輸入 
    cout << "Here are two more. ";   //提示使用者輸入 
    carrots = carrots+2;
    cout << "Now you have " << carrots << " carrots." << endl;  //輸出結果 
    
    system("PAUSE");
    return 0;
}

