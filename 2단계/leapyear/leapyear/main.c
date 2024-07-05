//
//  main.c
//  leapyear
//
//  Created by 이민성 on 2023/08/29.
//

    #include <stdio.h>

    int main(void) {
        int y;
        scanf("%d", &y);
        if (y % 4 == 0 && (y % 100 !=0 || y % 400 == 0))
            printf("1");
        else
            printf("0");
        return 0;
    }
