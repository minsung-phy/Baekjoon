//
//  main.c
//  maxmin
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int n, j;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &j);
        arr[i] = j;
    }
    int min = arr[0], max = arr[0];
    for (int k = 0; k < n; k++) {
        if (arr[k] < min)
            min = arr[k];
        if (arr[k] > max)
            max = arr[k];
    }
    printf("%d %d\n", min, max);
    return 0;
}
