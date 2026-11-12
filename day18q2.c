#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("%d\n", a);
    
    return 0;
}
