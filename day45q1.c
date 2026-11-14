#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }
    
    if (scanf(" %c", &ch) != 1) {
        printf("0\n");
        return 0;
    }
    
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
