#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long first = LLONG_MIN, second = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x < first) {
            second = x;
        }
    }
    
    if (second == LLONG_MIN) {
        printf("No second largest element\n");
    } else {
        printf("%lld\n", second);
    }
    
    return 0;
}
