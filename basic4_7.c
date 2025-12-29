#include <stdio.h>

#define MAX_SIZE 10

int calculateFrequency(int arr[], int size, int target) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

void displayAnalysisReport(int arr[], int size, int target, int result) {
    printf("\n FREQUENCY ANALYSIS REPORT \n");
    printf("Total elements recorded (N): %d\n", size);
    printf("Recorded Numbers: ");
    
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : " ");
    }
    
    printf("\nSearch Value: %d\n", target);
    printf("Frequency Count: %d\n", result);
}

int main() {
    int data[MAX_SIZE];
    int n, searchValue, count;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n > MAX_SIZE || n < 1) {
        n = MAX_SIZE;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &data[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &searchValue) != 1) {
        return 1;
    }

    count = calculateFrequency(data, n, searchValue);

    displayAnalysisReport(data, n, searchValue, count);

    return 0;
}
