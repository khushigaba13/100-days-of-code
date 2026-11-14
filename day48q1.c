#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    
    if (fgets(s1, sizeof(s1), stdin) == NULL || fgets(s2, sizeof(s2), stdin) == NULL) {
        printf("Not rotation\n");
        return 0;
    }
    
    int n1 = 0, n2 = 0;
    while (s1[n1] != '\0' && s1[n1] != '\n' && s1[n1] != '\r') {
        n1++;
    }
    while (s2[n2] != '\0' && s2[n2] != '\n' && s2[n2] != '\r') {
        n2++;
    }
    
    if (n1 != n2) {
        printf("Not rotation\n");
        return 0;
    }
    
    int isRotation = 0;
    
    if (n1 == 0) {
        isRotation = 1;
    }
    
    for (int shift = 0; shift < n1 && !isRotation; shift++) {
        int match = 1;
        for (int i = 0; i < n1; i++) {
            if (s1[(i + shift) % n1] != s2[i]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
        }
    }
    
    if (isRotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}
