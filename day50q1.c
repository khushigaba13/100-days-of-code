#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        printf("Invalid input\n");
        return 0;
    }
    
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    if (mm < 1 || mm > 12) {
        printf("Invalid month\n");
        return 0;
    }
    
    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);
    
    return 0;
}
