#include <iostream>
#include <string>
using namespace std;

template <class T>
void BubbleSort(int n, T A[])
{
	T temp;
	int i,j;
	for(i=n-1; i>=1; i--)	//for(i=0; i<n-1; i++)
	{
		for(j=0;j<i; j++)	//for(j=0; j<n-1; j++)
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main()
{
	int n=5;
	int A1[5]={12,33,2,4,22};
	double A2[5]={12.43, 12.33, 2.4 ,4.66 ,22.1};
	char A3[5]={'G','B','H','Z','Q'};
	string A4[5]={"Joe", "John", "Andy", "Mary", "Bob"};

	BubbleSort(n, A1);
	BubbleSort(n, A2);
	BubbleSort(n, A3);
	BubbleSort(n, A4);
	return 0;
}
