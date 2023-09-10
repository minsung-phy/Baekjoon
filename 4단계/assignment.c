//
//  main.c
//  assignment
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int i, j;
    int n;
    int arr[30] = {0, };
    for (i = 0; i < 28; i++) {
        scanf("%d", &n);
        arr[n-1] = 1;
    }
    for (j = 0; j < 30; j++) {
        if (arr[j] == 0)
            printf("%d\n", j+1);
    }
    return 0;
}
