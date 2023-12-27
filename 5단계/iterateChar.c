//
//  main.c
//  iterateChar
//
//  Created by 이민성 on 12/27/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d", &a);
    for (b = 0; b < a; b++) {
        int R;
        int i, j = 0;
        char S[20] = {0, };
        scanf("%d %s", &R, S);
        while (S[j] != 0) {
            for (i = 0; i < R; i++)
                printf("%c", S[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}
