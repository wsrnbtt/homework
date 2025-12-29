#include <stdio.h>

#define MAX_SIZE 10
#define UNVISITED -1
#define VISITED 0

int findAndMarkFrequency(int data[], int status[], int n, int index) {
    int count = 1;
    
    for (int j = index + 1; j < n; j++) {
        if (data[index] == data[j]) {
            count++;
            status[j] = VISITED;
        }
    }
    
    return count;
}

void printFrequencyTable(int data[], int status[], int n) {
    printf("\n--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (int i = 0; i < n; i++) {
        if (status[i] == UNVISITED) {
            int count = findAndMarkFrequency(data, status, n, i);
            printf("%-6d | %d\n", data[i], count);
        }
    }
}

int main() {
    int data[MAX_SIZE];
    int status[MAX_SIZE];
    int n;

    for (int i = 0; i < MAX_SIZE; i++) {
        status[i] = UNVISITED;
    }

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

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", n);
    printf("Recorded Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printFrequencyTable(data, status, n);

    return 0;
}
