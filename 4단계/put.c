//
//  main.c
//  put
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int n, m;
    int i, j, k;
    int x;
    int a, b, c;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (x = 0; x < n; x++)
        arr[x] = 0;
    for (a = 0; a < m; a++) {
        scanf("%d %d %d", &i, &j, &k);
        for (b = i; b <= j; b++) {
            arr[b-1] = k;
        }
    }
    for (c = 0; c < n; c++)
        printf("%d ", arr[c]);
    return 0;
}
