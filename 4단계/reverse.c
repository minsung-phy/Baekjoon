//
//  main.c
//  reverse
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int n, m;
    int a, b, c, d;
    int i, j;
    int temp;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (a = 0; a < n; a++)
        arr[a] = a+1;
    for (b = 0; b < m; b++) {
        scanf("%d %d", &i, &j);
        i -= 1;
        j -= 1;
        for (c = i; c < j; c++) {
            temp = arr[c];
            arr[c] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (d = 0; d < n; d++)
            printf("%d ", arr[d]);
    return 0;
}

// 문제는 주어진 범위에서 역순으로 바꾸는 문제인데, 아래 코드는 단순히 순서를 바꾸는 것임.
//int main(void) {
//    int n, m;
//    int initial;
//    int x, y;
//    int i, j;
//    int a;
//    scanf("%d %d", &n, &m);
//    int arr[n];
//    for (initial = 0; initial < n; initial++)
//        arr[initial] = initial + 1;
//    for (x = 0; x < m; x++) {
//        scanf("%d %d", &i, &j);
//        i -= 1;
//        j -= 1;
//        a = arr[i];
//        arr[i] = arr[j];
//        arr[j] = a;
//    }
//    for (y = 0; y < n; y++)
//        printf("%d ", arr[y]);
//    return 0;
//}
