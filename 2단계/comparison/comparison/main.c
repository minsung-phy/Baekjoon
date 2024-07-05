//
//  main.c
//  comparison
//
//  Created by 이민성 on 2023/08/29.
//

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf(">\n");
    else if (a < b)
        printf("<\n");
    else
        printf("==\n");
    return 0;
}
