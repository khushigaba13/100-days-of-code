#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long num = n;
    if (num < 0) {
        num = -num;
    }
    
    int count[10] = {0};
    do {
        count[num % 10]++;
        num /= 10;
    } while (num > 0);
    
    int best = 0;
    for (int d = 1; d < 10; d++) {
        if (count[d] > count[best]) {
            best = d;
        }
    }
    
    printf("%d\n", best);
    
    return 0;
}
