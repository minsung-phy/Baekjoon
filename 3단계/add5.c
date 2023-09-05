//
//  main.c
//  add5
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);
    return 0;
}
