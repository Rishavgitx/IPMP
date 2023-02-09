#include<iostream>
using namespace std;

bool sum_of_3(int A[], int arr_size, int sum)
{
	for (int i = 0; i < arr_size - 2; i++)
	{

		for (int j = i + 1; j < arr_size - 1; j++)
		{

			for (int k = j + 1; k < arr_size; k++)
			{
				if (A[i] + A[j] + A[k] == sum)
				{
					cout  << A[i] << "," << A[j] << "," << A[k];
					return 1;
				}
			}
		}
	}

	return 0;
}

int main()
{
	int A[] = {9,6,3,2,4,1 };
	int sum = 9;
	int arr_size = sizeof(A) / sizeof(A[0]);
	sum_of_3(A, arr_size, sum);
    cout<<endl;
	return 0;
}

