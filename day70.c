#include <stdio.h>

int main() {
    char line[10000];

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    /* find the text after the first '=' (if there is no '=', use the whole line) */
    int start = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '=') {
            start = i + 1;
            break;
        }
    }
    while (line[start] == ' ' || line[start] == '\t') {
        start++;
    }

    int newWord = 1;
    for (int i = start; line[i] != '\0' && line[i] != '\n' && line[i] != '\r'; i++) {
        char ch = line[i];
        if (ch == ' ' || ch == '\t') {
            newWord = 1;
            printf("%c", ch);
        } else {
            if (newWord) {
                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - 'a' + 'A';
                }
                newWord = 0;
            } else {
                if (ch >= 'A' && ch <= 'Z') {
                    ch = ch - 'A' + 'a';
                }
            }
            printf("%c", ch);
        }
    }
    printf("\n");

    return 0;
}
