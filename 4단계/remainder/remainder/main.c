//
//  main.c
//  remainder
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int i, j, k;
    int n;
    int count, result = 0;
    int arr[10];
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        arr[i] = n % 42;
    }
    for (j = 0; j < 10; j++) {
        count = 0;
        for (k = j+1; k < 10; k++) {
            if (arr[j] == arr[k])
                count++;
        }
        if (count == 0)
            result++;
    }
    printf("%d\n", result);
    return 0;
}
