#include <iostream>
#include <string.h>
using namespace std;

void BubbleSort(int n, double A[])
{
	double temp;
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

void BubbleSort(int n, int A[])
{
	int temp;
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
void BubbleSort(int n, char A[])
{
	char temp;
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


void BubbleSort(int n, char A[][100])
{
	char temp[100];
	int i,j;
	for(i=n-1; i>=1; i--)	//for(i=0; i<n-1; i++)
	{
		for(j=0;j<i; j++)	//for(j=0; j<n-1; j++)
		{
			if(strcmp(A[j], A[j+1]) > 0)
			{
				strcpy(temp, A[j]);
				strcpy(A[j], A[j+1]);
				strcpy(A[j+1], temp);
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
	char A4[5][100]={"Joe", "John", "Andy", "Mary", "Bob"};

	BubbleSort(n, A1);
	BubbleSort(n, A2);
	BubbleSort(n, A3);
	BubbleSort(n, A4);
	return 0;
}
