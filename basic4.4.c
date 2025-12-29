#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < SIZE; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\n  NUMBER CLASSIFICATION REPORT \n");
    
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d%s", numbers[i], (i == SIZE - 1) ? "" : " ");
    }
    printf("\n");

    printf("Total Even Numbers Found: %d\n", even_count);
    printf("Total Odd Numbers Found: %d\n", odd_count);

    return 0;
}
