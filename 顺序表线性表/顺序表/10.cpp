#include<iostream>
#include<algorithm>
using namespace std;

void my_swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int p = 0;
	cin >> p;
	int n = sizeof(arr) / sizeof(arr[0]);
	int end = n - p;

	if (p < n) {
		for (int i = 0; i < end; ++i) {
			my_swap(&arr[i], &arr[p]);
			++p;
		}
	}

	for (auto e : arr) {
		cout << e << " ";
	}

	return 0;
}