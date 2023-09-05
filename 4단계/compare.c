//
//  main.c
//  compare
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int n, x, p;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p);
        a[i] = p;
    }
    for (int j = 0; j < n; j++) {
        if (a[j] < x)
            printf("%d ", a[j]);
    }
    return 0;
}
