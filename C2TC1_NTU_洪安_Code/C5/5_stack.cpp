#include <iostream>

using std::cout;
using std::cin;
using std::endl;



class stack{
   private:
	int data[10] ;
	int top, size ;
   public:
	stack():top(-1),size(10) {}
	int pop(); 
	void push(int x);    
	void print();
};

void stack::push(int x)
{
	data[++top] = x ; 
}

T stack::pop()
{ 
	return data[top--] ;  
}

void stack::print() 
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
