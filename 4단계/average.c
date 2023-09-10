//
//  main.c
//  average
//
//  Created by 이민성 on 2023/09/10.
//

#include <stdio.h>

int main(void) {
    int n, m = 0;
    int i, j, k;
    int score;
    float sum = 0.0;
    float average;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &score);
        arr[i] = score;
    }
//    for (j = 0; j < n; j++) {
//        for (k = j+1; k < n; k++) {
//            if (arr[j] < arr[k])
//                m = arr[k];
//            else
//                m = arr[j];
//        }
//    }
    for (j = 0; j < n; j++) {
        if (m < arr[j])
            m = arr[j];
    }
    for (k = 0; k < n; k++)
        sum += (float)arr[k] / m * 100;
    average = sum / n;
    printf("%f\n", average);
    return 0;
}
