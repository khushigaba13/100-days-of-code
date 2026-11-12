#include <stdio.h>

int main() {
    char bin[100];
    scanf("%99s", bin);
    
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0') {
            printf("1");
        } else if (bin[i] == '1') {
            printf("0");
        }
    }
    printf("\n");
    
    return 0;
}
