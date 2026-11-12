#include <stdio.h>

int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    
    if (sp > cp) {
        double profitPercent = (sp - cp) / cp * 100;
        printf("Profit %g%%\n", profitPercent);
    } else if (sp < cp) {
        double lossPercent = (cp - sp) / cp * 100;
        printf("Loss %g%%\n", lossPercent);
    } else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
