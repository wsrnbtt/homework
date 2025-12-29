#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int data[MAX_SIZE];
    int N;
    int search_value;
    int count = 0;
    int i;

    if (scanf("%d", &N) != 1) return 1;
    
    if (N > MAX_SIZE || N < 1) {
        N = MAX_SIZE;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%d", &data[i]) != 1) return 1;
    }

    if (scanf("%d", &search_value) != 1) return 1;

    
    for (i = 0; i < N; i++) {
        if (data[i] == search_value) {
            count++;
        }
    }

    printf("\n FREQUENCY ANALYSIS REPORT \n");
    printf("Total elements recorded (N): %d\n", N);
    
    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d%s", data[i], (i == N - 1) ? "" : " ");
    }
    printf("\n");

    printf("Search Value: %d\n", search_value);
    printf("Frequency Count: %d\n", count);

    return 0;
}
