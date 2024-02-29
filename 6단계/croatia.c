#include <stdio.h>
#include <string.h>


int main()
{
	char word[100] = {0, };
	scanf("%s", word);
	
	int num = 0;
	int len = strlen(word);
	
	for (int i = 0; i < len; i++) {
		if (word[i] == 'c' && (word[i+1] == '=' || word[i+1] == '-')) {
			num++;
			i++;
		}
		else if (word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') {
			num++;
			i += 2;
		}
		else if (word[i] == 'd' && word[i+1] == '-') {
			num++;
			i++;
		}
		else if (word[i] == 'l' && word[i+1] == 'j') {
			num++;
			i++;
		}
		else if (word[i] == 'n' && word[i+1] == 'j') {
			num++;
			i++;
		}
		else if (word[i] == 's' && word[i+1] == '=') {
			num++;
			i++;
		}
		else if (word[i] == 'z' && word[i+1] == '=') {
			num++;
			i++;
		}
		else 
			num++;
	}
	
	printf("%d\n", num);

	return 0;
	
}

