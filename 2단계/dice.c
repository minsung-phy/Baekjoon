//
//  main.c
//  dice
//
//  Created by 이민성 on 2023/08/30.
//

#include <stdio.h>

#define max(a, b)  (((a) > (b)) ? (a) : (b))

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("%d\n", 10000+(a*1000));
    else if (a == b || b == c || c == a) {
        if (a == b || c == a)
            printf("%d\n", 1000+(a*100));
        else
            printf("%d\n", 1000+(b*100));
    }
    else
        printf("%d\n", 100 * (max(a, max(b,c))));
    return 0;
}
