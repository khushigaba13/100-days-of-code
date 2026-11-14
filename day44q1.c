#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Spaces=0, Digits=0, Special=0\n");
        return 0;
    }
    
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            continue;
        } else {
            special++;
        }
    }
    
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    
    return 0;
}
