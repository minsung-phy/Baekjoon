#include <stdio.h>

int main(void) {
    int paper[100][100] = {0, };
    int x, y, n;
    int ans = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                paper[x + j][y + k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1)
                ans++;
        }
    }
    
    printf("%d\n", ans);

    return 0;
}