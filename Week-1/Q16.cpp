
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

	
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = {0,0,0,2,2,1,2};
    cout<<"Given element: 0 0 0 2 2 1 2\n";
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
    cout<<"Rearranged element:";
	printArray(arr, N);
	return 0;
}
