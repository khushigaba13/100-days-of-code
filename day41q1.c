#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }
    
    int count = 0;
    while (str[count] != '\0' && str[count] != '\n' && str[count] != '\r') {
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
