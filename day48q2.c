#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    
    int i = 0;
    while (i < len) {
        if (str[i] == ' ' || str[i] == '\t') {
            printf("%c", str[i]);
            i++;
        } else {
            int start = i;
            while (i < len && str[i] != ' ' && str[i] != '\t') {
                i++;
            }
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
        }
    }
    printf("\n");
    
    return 0;
}
