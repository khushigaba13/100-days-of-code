#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        printf("%c", ch);
    }
    printf("\n");
    
    return 0;
}
