//
//  main.c
//  str
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

#define max 1000

int main(void) {
    int n;
    char arr[max];
    scanf("%s", arr);
    scanf("%d", &n);
    printf("%c\n", arr[n-1]);
    return 0;
}
