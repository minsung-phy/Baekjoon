//
//  main.c
//  multiplication2
//
//  Created by 이민성 on 2023/08/29.
//

#include <stdio.h>

int main(void) {
    int a, b;
    int c, d, e;
    scanf("%d %d", &a, &b);
    c = a * (b % 10);
    d = a * (b / 10 % 10);
    e = a * (b / 100);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", a*b);
    return 0;
}
