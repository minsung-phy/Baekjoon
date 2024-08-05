#include <stdio.h>

int main() 
{
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int c;
        scanf("%d", &c);

        int quarter_count = 0;
        int dime_count = 0;
        int nickel_count = 0;
        int penny_count = 0;

        if (c / 25 >= 1) {
            quarter_count = c / 25;
            c -= quarter * quarter_count;
        }
        if (c / 10 >= 1) {
            dime_count = c / 10;
            c -= dime * dime_count;
        }
        if (c / 5 >= 1) {
            nickel_count = c / 5;
            c -= nickel * nickel_count;
        }
        if (c / 1 >= 1) {
            penny_count = c / 1;
            c -= penny * penny_count;
        }
        printf("%d %d %d %d\n", quarter_count, dime_count, nickel_count, penny_count);
    }

    return 0;
}