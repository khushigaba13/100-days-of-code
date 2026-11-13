#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int numGroups = 5;
    
    for (int g = 0; g < numGroups; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        if (g < numGroups - 1) {
            printf("\n");
        }
    }
    
    return 0;
}
