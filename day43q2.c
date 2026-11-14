#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Palindrome\n");
        return 0;
    }
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    
    int isPalindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}
