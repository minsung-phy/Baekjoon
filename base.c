#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char n[101] = {0, };
    int b = 0;
    int result = 0;

    scanf("%s %d", n, &b);
    
    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        int digit = 0;
        if (n[i] >= 'A' && n[i] <= 'Z') {
            digit = n[i] - 55;
        }
        else if (n[i] >= '0' && n[i] <= '9') {
            digit = n[i] - '0';
        }
        result += digit * pow(b, len - 1 - i);
    }
    printf("%d\n", result);
}