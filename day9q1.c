#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double d = b * b - 4 * a * c;
    
    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", r1, r2);
    } else if (d == 0) {
        double r = -b / (2 * a);
        printf("Roots are real and same: %g\n", r);
    } else {
        printf("Roots are complex\n");
    }
    
    return 0;
}
