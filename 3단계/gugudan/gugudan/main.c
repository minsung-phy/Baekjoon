//
//  main.c
//  gugudan
//
//  Created by 이민성 on 2023/08/30.
//

#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
