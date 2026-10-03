#if 0
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[] = { 1,2,3 };
	int b[] = { 2,3,4 };
	int c[] = { 3,4,5 };

	int i, j, k;
	i = j = k = 0;
	int n = sizeof(a) / sizeof(a[i]);

	while(i<n && j<n && k<n)
	{
		if (a[i] == b[j] && b[j] == c[k])
		{
			cout << a[i] << endl;
			++i;
			++j;
			++k;
		}

		else {
			int max_of_arr = max({ a[i], b[j], c[k] });

			if (a[i] < max_of_arr) ++i;
			if (b[j] < max_of_arr) ++j;
			if (c[k] < max_of_arr) ++k;
		}
	}

	return 0;
}

#endif