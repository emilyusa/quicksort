#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>

using namespace std;

const int N = 100010;
int a[N];

void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;

	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}


int main()
{
	//input
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	quick_sort(a, 0, n - 1);

	//output
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;

}