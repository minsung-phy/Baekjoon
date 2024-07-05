//
//  main.c
//  add
//
//  Created by 이민성 on 2023/08/30.
//

#include <stdio.h>

int main(void) {
    int a, b, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}
