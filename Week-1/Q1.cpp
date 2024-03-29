#include <iostream>
using namespace std;


void printUnion(int a[], int a2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (a[i] < a2[j])
			cout << a[i++] << " ";

		else if (a2[j] < a[i])
			cout << a2[j++] << " ";

		else {
			cout << a2[j++] << " ";
			i++;
		}
	}

	while (i < m)
		cout << a[i++] << " ";

	while (j < n)
		cout << a2[j++] << " ";
}

int main()
{
	int a[] = { 1, 2, 4, 5, 6 };
	int a2[] = { 2, 3, 5, 7 };

	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(a2) / sizeof(a2[0]);

	printUnion(a, a2, m, n);

	return 0;
}
