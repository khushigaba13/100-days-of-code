#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    int newWord = 1;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            newWord = 1;
        } else {
            if (newWord) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    printf("%c.", str[i] - 'a' + 'A');
                } else {
                    printf("%c.", str[i]);
                }
                newWord = 0;
            }
        }
    }
    printf("\n");
    
    return 0;
}
