#include <iostream>

using std::cout;
using std::cin;
using std::endl;


template <class T>
class stack{
   private:
	T data[10] ;
	int top, size ;
   public:
	stack():top(-1),size(10) {}
	T pop(); 
	void push(T x);    
	void print();
};

template <class T>
void stack<T>::push(T x)
{
	data[++top] = x ; 
}

template <class T>
T stack<T>::pop()
{ 
	return data[top--] ;  
}

template <class T>
void stack<T>::print() 
{
	for(int i=0;i<=top;i++)
	{
		cout << data[i] << endl;
	}
}



int main() {
	
	stack<int> s1 ;
    int i;
	
	for (i = 0 ; i<5; i++) 
		 s1.push(i) ;
	   
	s1.print() ;	

	stack<char> s2 ;
	

	for (i = 0 ; i<5; i++) 
		s2.push('A'+i) ;
	s2.print() ;
	system("pause");
	return 0;
}
