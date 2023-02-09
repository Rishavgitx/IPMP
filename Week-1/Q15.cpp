#include <iostream>
using namespace std;

void pushtoZeroes(int arr[], int n)
{
	int count = {0}; 

	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i]; 
	while (count < n)
		arr[count++] = 0;
}

int main()
{
	int arr[] = {0,1,2,0,0,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	pushtoZeroes(arr, n);
	cout<< "Array after pushing all zeros to end of array\n";
	for (int i = 0; i < n; i++)
	cout<< arr[i]<<" ";

	return 0;
}
