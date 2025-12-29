#include <stdio.h>

struct CharCount {
    int upper;
    int lower;
    int digit;
    int other;
};

int main() {
    char text[101];
    struct CharCount counter = {0, 0, 0, 0};
    int i;

    if (scanf("%[^\n]", text) != 1) {
        return 0;
    }

    for (i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c >= 'A' && c <= 'Z') {
            counter.upper++;
        } 
        else if (c >= 'a' && c <= 'z') {
            counter.lower++;
        } 
        else if (c >= '0' && c <= '9') {
            counter.digit++;
        } 
        else {
            counter.other++;
        }
    }

    printf("Uppercase: %d\n", counter.upper);
    printf("Lowercase: %d\n", counter.lower);
    printf("Digits: %d\n", counter.digit);
    printf("Special/Other: %d\n", counter.other);

    return 0;
}
