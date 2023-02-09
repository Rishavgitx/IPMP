#include<iostream>
using namespace std;

bool sum_of_4(int A[], int arr_size, int sum)
{
	for (int i = 0; i < arr_size - 3; i++)
	{

		for (int j = i + 1; j < arr_size - 2; j++)
		{

			for (int k = j + 1; k < arr_size -1; k++)
			{
                for (int l = k + 1; l < arr_size ; l++)
		{
				if (A[i] + A[j] + A[k]+A[l] == sum)
				{
					cout  << A[i] << "," << A[j] << "," << A[k]<<"," <<A[l];
					return 1;
				}
			}
		}
	}
    }
	return 0;
}

int main()
{
	int A[] = {1,0,-1,0,-2,2};
	int sum = 0;
	int arr_size = sizeof(A) / sizeof(A[0]);
	sum_of_4(A, arr_size, sum);
    cout<<endl;
	return 0;
}

