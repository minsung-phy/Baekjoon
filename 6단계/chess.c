#include <stdio.h>

int main()
{
	int k, q, r, b, n, p;
	scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &n, &p);
	printf("%d ", 1-k);
	printf("%d ", 1-q);
	printf("%d ", 2-r);
	printf("%d ", 2-b);
	printf("%d ", 2-n);
	printf("%d\n", 8-p);

	return 0;
}
