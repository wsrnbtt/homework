#include <stdio.h>

#define SIZE 6

int main() {
    int data[SIZE];
    int total_sum = 0;
    int i;

    for (i = 0; i < SIZE; i++) {
        if (scanf("%d", &data[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < SIZE; i++) {
        total_sum += data[i]; 
    }

    printf("\n SUMMATION REPORT \n");
    
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d%s", data[i], (i == SIZE - 1) ? "" : " ");
    }
    printf("\n");

    printf("Total Sum of Numbers: %d\n", total_sum);

    return 0;
}
