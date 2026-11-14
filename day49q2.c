#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    
    /* Trim trailing spaces/tabs */
    while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\t')) {
        len--;
    }
    
    /* Find the start of the last word (the surname) */
    int surnameStart = len;
    while (surnameStart > 0 && str[surnameStart - 1] != ' ' && str[surnameStart - 1] != '\t') {
        surnameStart--;
    }
    
    /* Print initials of every word before the surname */
    int newWord = 1;
    for (int i = 0; i < surnameStart; i++) {
        if (str[i] == ' ' || str[i] ==
