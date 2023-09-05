//
//  main.c
//  long
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    for (i = 4; i <= n; i += 4) {
        printf("long ");
    }
    printf("int\n");
    return 0;
}
