//
//  main.c
//  constant
//
//  Created by 이민성 on 12/28/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[4];
    char b[4];
    char temp;
    int j, k;
    
    scanf("%s %s", a, b);

    temp = a[2];
    a[2] = a[0];
    a[0] = temp;
    
    temp = b[2];
    b[2] = b[0];
    b[0] = temp;
    
    if (a[0] > b[0])
        for (j = 0; j < 3; j++)
            printf("%d", a[j] - '0');
    else if (a[0] < b[0])
        for (k = 0; k < 3; k++)
            printf("%d", b[k] - '0');
    else if (a[0] == b[0] && a[1] > b[1])
        for (j = 0; j < 3; j++)
            printf("%d", a[j] - '0');
    else if (a[0] == b[0] && a[1] < b[1])
        for (k = 0; k < 3; k++)
            printf("%d", b[k] - '0');
    else if (a[0] == b[0] && a[1] == b[1] && a[2] > b[2])
        for (j = 0; j < 3; j++)
            printf("%d", a[j] - '0');
    else if (a[0] == b[0] && a[1] == b[1] && a[2] < b[2])
        for (k = 0; k < 3; k++)
            printf("%d", b[k] - '0');
    else
        for (j = 0; j < 3; j++)
            printf("%d", a[j] - '0');
    printf("\n");
    
    return 0;
}
