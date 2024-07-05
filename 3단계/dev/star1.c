//
//  main.c
//  star1
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int i, j, k;
    scanf("%d", &i);
    for (j = 0; j < i; j++) {
        for (k = 0; k < j+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
