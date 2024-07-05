//
//  main.c
//  len
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

#define max 100

int main(void) {
    char arr[max];
    int i;
    int count = 0;
    scanf("%s", arr);
    for (i = 0; arr[i] != NULL; i++)
        count++;
    printf("%d\n", count);
    return 0;
}
