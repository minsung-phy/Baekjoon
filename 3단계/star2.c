//
//  main.c
//  star2
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d", &a);
    for (b = 0; b < a; b++) {
        for (c = a; c > b+1; c--) {
            printf(" ");
        }
        for (d = 0; d < b+1; d++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
