//
//  main.c
//  oven
//
//  Created by 이민성 on 2023/08/30.
//

#include <stdio.h>
#include <stdlib.h>

int oven(void) {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    int m = b+c;
    if (m < 60)
        printf("%d %d\n", a, m);
    else if (m % 60 == 0)
        printf("%d %d\n", a + (m / 60), 0);
    else {// (m > 60)
        a = a + (m / 60);
        b = m - (60 * (m/60));
        if (a < 23)
            printf("%d %d\n", a, b);
        else
            printf("%d %d\n", abs(24 - (a % 60)), b);
    }
    return 0;
}

int main(void) {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    if (b+c < 60)
        printf("%d %d\n", a, b+c);
    else { // b+c >= 60
        int h = (b+c) / 60;
        int m = (b+c) % 60;
        if (a+h < 24)
            printf("%d %d\n", a+h, m);
        else // a+b >= 24
            printf("%d %d\n", a+h-24, m);
    }
}
