#include <stdio.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    int bestStart = 0, bestLen = 0;
    int curStart = 0, curLen = 0;
    
    for (int i = 0; ; i++) {
        char ch = str[i];
        int isEnd = (ch == '\0' || ch == '\n' || ch == '\r');
        
        if (ch != ' ' && ch != '\t' && !isEnd) {
            if (curLen == 0) {
                curStart = i;
            }
            curLen++;
        } else {
            if (curLen > bestLen) {
                bestLen = curLen;
                bestStart = curStart;
            }
            curLen = 0;
            if (isEnd) {
