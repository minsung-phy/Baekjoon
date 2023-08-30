//
//  main.c
//  sum
//
//  Created by 이민성 on 2023/08/30.
//

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
