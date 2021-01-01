#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <class T>
bool  mygreater(T x, T y) 
{
    return x>y;
}

int main() 
{
    int a[7] = { 8, 1, 3, 2, 5, 1, 4};
    vector<int> v(a,a+7);
    vector<int>::iterator it ;

    sort(v.begin( ), v.end( )) ;  //由小排到大
    for ( it = v.begin( ); it != v.end( ) ; it++)  
        cout << *it <<" ";
    cout << endl;
	
    sort(v.begin( ), v.end( ), mygreater<int>) ;  //mygreater 由大排到小
    for ( it = v.begin( ); it != v.end( ) ; it++)  
        cout << *it <<" ";
    cout << endl;
    system("pause");
    return 0;
}
