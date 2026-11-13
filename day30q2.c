#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > 0) {
            positive++;
        } else if (x < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}
