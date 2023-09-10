//
//  main.c
//  change
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int n, m;
    int x, y, z;
    int i, j;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (x = 0; x < n; x++) {
        arr[x] = x + 1;
    }
    for (y = 0; y < m; y++) {
        scanf("%d %d", &i, &j);
        i -= 1;
        j -= 1;
        int s;
        s = arr[i];
        arr[i] = arr[j];
        arr[j] = s;
    }
    for (z = 0; z < n; z++)
        printf("%d ", arr[z]);
    return 0;
}
