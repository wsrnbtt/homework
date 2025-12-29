#include <stdio.h>

#define SIZE 5

int calculate_sum(int data_array[], int n);

int main() {
    int numbers[SIZE];
    int total_sum;
    float average;
    int i;

    printf("Enter %d integer numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        if (scanf("%d", &numbers[i]) != 1) return 1;
    }

    total_sum = calculate_sum(numbers, SIZE);

    average = total_sum * 1.0f / SIZE;

    printf("\n ARRAY AVERAGE REPORT \n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", average); 
    return 0;
}

int calculate_sum(int data_array[], int n) {
    int total = 0; 
    int index = 0;

    while (index < n) {
        total = total + data_array[index];
        index++;
    }

    return total;
}
