//
//  main.c
//  sum
//
//  Created by 이민성 on 12/27/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n, m = 0;
    char sum[100];
    scanf("%d", &n);
    scanf("%s", sum);
    for (i = 0; i < n; i++) {
        m += (sum[i] - '0');
    }
    printf("%d\n", m);
    return 0;
}
