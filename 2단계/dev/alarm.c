//
//  main.c
//  alarm
//
//  Created by 이민성 on 2023/08/29.
//

#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);
    if (m >= 45)
        printf("%d %d\n", h, m-45);
    else if (h > 0 && m < 45)
        printf("%d %d\n", h-1, m+15);
    else
        printf("%d %d\n", 24-1, m+15);
    
    return 0;
}
