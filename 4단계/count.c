//
//  main.c
//  count
//
//  Created by 이민성 on 2023/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f = 0;
    scanf("%d", &a);
    int arr[a];
    
    for (b = 0; b < a; b++) {
        scanf("%d", &c);
        arr[b] = c;
    }

    scanf("%d", &d);
    
    for (e = 0; e < a; e++) {
        if (arr[e] == d)
            f += 1;
    }
    printf("%d\n", f);
    
    return 0;
}
