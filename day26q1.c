#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= 5 - i; s++) {
            printf(" ");
        }
        for (int j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
