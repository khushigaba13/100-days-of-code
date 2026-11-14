#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    
    if (fgets(s1, sizeof(s1), stdin) == NULL || fgets(s2, sizeof(s2), stdin) == NULL) {
        printf("Not anagrams\n");
        return 0;
    }
    
    int count[256] = {0};
    
    for (int i = 0; s1[i] != '\0' && s1[i] != '\n' && s1[i] != '\r'; i++) {
        count[(unsigned char)s1[i]]++;
    }
