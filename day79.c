#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open numbers.txt\n");
        return 1;
    }

    long long sum = 0;
    int count = 0;
    int x;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("Sum = 0\n");
        printf("Average = 0.00\n");
        return 0;
    }

    double average = (double)sum / count;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
