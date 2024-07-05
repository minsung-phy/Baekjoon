//
//  main.c
//  countWord
//
//  Created by 이민성 on 12/28/23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char S[1000001]; // 마지막 배열에 널문자 '\0'이 들어가므로 크기를 1000001이상으로 잡아줘야함.
    int count = 0;
    
    scanf("%[^\n]s", S); // %s로 문자열을 입력받으면 공백을 받지 못하므로 %[^\n]s 사용
    
    if (S[0] != ' ')
        count++;
    
    for (int i = 1; i < strlen(S); i++)
        if (S[i-1] == ' ' && S[i] != ' ')
            count++;
    
    printf("%d\n", count);
    
    return 0;
}
