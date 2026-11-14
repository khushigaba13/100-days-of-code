#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("None\n");
        return 0;
    }
    
    int seen[26] = {0};
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (seen[ch - 'a']) {
                printf("%c\n", ch);
                return 0;
            }
            seen[ch - 'a'] = 1;
        }
    }
    
    printf("None\n");
    
    return 0;
}
