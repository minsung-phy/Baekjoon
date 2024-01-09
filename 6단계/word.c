#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[1000001];
    int alphabet[26] = {0,};
    int max = 0;
    char result;

    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        str[i] = toupper(str[i]);
        alphabet[str[i]-'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            result = i + 'A';
        }
    }

    int count = 0;

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == max){
            count++;
        }
    }

    if (count > 1){
        printf("?\n");
    }
    else {
        printf("%c\n", result);
    }

    return 0;
}

