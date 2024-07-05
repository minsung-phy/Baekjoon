#include <stdio.h>

int main(void) {
	int n;
	int m;
	
	scanf("%d %d", &n, &m);
	
	int matrix[n][m];
	int matrix2[n][m];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", matrix[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	
	return 0;		
}
