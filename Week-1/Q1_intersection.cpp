#include <iostream>
using namespace std;

void printIntersection(int a1[], int a2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (i > 0 && a1[i] == a1[i - 1]) {	 
			i++;
			continue;
		}
		if (a1[i] < a2[j])
			i++;
		else if (a2[j] < a1[i])
			j++;
		else 
		{
			cout << a2[j] << " ";
			i++;
			j++;
		}
	}
}

int main()
{
	int a1[] = { 1, 2, 2, 3, 4,6};
	int a2[] = { 2, 2, 4, 6, 7, 8 };

	int m = sizeof(a1) / sizeof(a1[0]);
	int n = sizeof(a2) / sizeof(a2[0]);
    
	printIntersection(a1, a2, m, n);
cout<<endl;
	return 0;
}
