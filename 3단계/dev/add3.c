//
//  main.c
//  add3
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    return 0;
}
