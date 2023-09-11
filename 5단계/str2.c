//
//  main.c
//  str2
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

#define max 1000

int main(void) {
    int t;
    int i, j;
    
    scanf("%d", &t);
    
    for (i = 0; i < t; i++) {
        int count = 0;
        char str[max];
        scanf("%s", str);
        
        for (j = 0; str[j] != NULL; j++)
            count++;
        
        printf("%c", str[0]); printf("%c\n", str[count-1]);
    }
    return 0;
}
