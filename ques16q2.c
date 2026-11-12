#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Not palindrome\n");
        return 0;
    }
    
    long long reversed = 0;
    int num = n;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    if (reversed == n) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}
