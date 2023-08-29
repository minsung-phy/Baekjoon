//
//  main.c
//  remain
//
//  Created by 이민성 on 2023/08/29.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a + b) % c);
    printf("%d\n", ((a % c) + (b % c)) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", ((a % c) * (b % c)) % c);
    return 0;
}
