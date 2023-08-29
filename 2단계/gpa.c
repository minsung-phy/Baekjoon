//
//  main.c
//  gpa
//
//  Created by 이민성 on 2023/08/29.
//

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if (a >= 90)
        printf("A\n");
    else if (a >= 80)
        printf("B\n");
    else if (a >= 70)
        printf("C\n");
    else if (a >= 60)
        printf("D\n");
    else
        printf("F\n");
    return 0;
}
