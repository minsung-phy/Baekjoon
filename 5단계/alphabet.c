//
//  main.c
//  alphabet
//
//  Created by 이민성 on 12/27/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j;
    char S[100] = {0, };
    scanf("%s", S);
    for (i = 97; i <= 122; i++) {
        j = 0;
        while (S[j] != 0) {
            if (S[j] == (char)i)
                break;
            j++;
        }
        if (S[j] == (char)i)
            printf("%d ", j);
        else
            printf("-1 ");
    }
    printf("\n");
    return 0;
}
