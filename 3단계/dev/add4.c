//
//  main.c
//  add4
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        printf("%d\n", a+b);
    }
    return 0;
}
