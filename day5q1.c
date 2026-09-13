#include <stdio.h>
#include <math.h>
#include <string.h>

void printTrimmed(double value) {
    char buf[50];
    sprintf(buf, "%.2f", value);
    
    // Remove trailing zero and trailing dot if not needed
    int len = strlen(buf);
    if (strchr(buf, '.') != NULL) {
        while (buf[len-1] == '0') {
            buf[len-1] = '\0';
            len--;
        }
        if (buf[len-1] == '.') {
            buf[len-1] = '\0';
        }
    }
    printf("%s", buf);
}

int main() {
    double principal, rate, time;
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    double simpleInterest = (principal * rate * time) / 100;
    double compoundInterest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("Simple Interest=");
    printTrimmed(simpleInterest);
    printf(", Compound Interest=");
    printTrimmed(compoundInterest);
    printf("\n");
    
   return 0;
}
