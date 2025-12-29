#include <stdio.h>

#define SIZE 5

void sort_array_ascending(int data[], int n);
void print_array(int data[], int n);

int main() {
    int numbers[SIZE];
    int original_copy[SIZE];
    int i;

    printf("Enter %d integer numbers for sorting:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        original_copy[i] = numbers[i];
    }

    sort_array_ascending(numbers, SIZE);

    printf("\n ARRAY SORTING REPORT \n");
    
    printf("Original Array: ");
    print_array(original_copy, SIZE);

    printf("Sorted Array (Ascending): ");
    print_array(numbers, SIZE);

    return 0; //
}

void sort_array_ascending(int data[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (data[j] < data[min_idx]) {
                min_idx = j;
            }
        }

        temp = data[min_idx];
        data[min_idx] = data[i];
        data[i] = temp;
    }
}

void print_array(int data[], int n) {
    for (int idx = 0; idx < n; idx++) {
        printf("%d ", data[idx]);
    }
    printf("\n");
}
