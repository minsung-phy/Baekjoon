#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", str);
	int len = strlen(str) - 1;

	for (int i = 0; i <= len / 2; i++) {
		if (str[i] != str[len - i]) {
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");
	return 0;
}

