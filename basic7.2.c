#include <stdio.h>
#include <stdlib.h> 

#define FILENAME "input_data.csv"

int main() {
    FILE *fptr;
    int n1, n2, n3, n4, n5;
    int total_sum = 0;

    fptr = fopen(FILENAME, "r");

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILENAME);
        exit(1);
    }

    printf(" FILE READING PROCESS \n");
    printf("Reading data from %s ... \n", FILENAME);

    if (fscanf(fptr, "%d,%d,%d,%d,%d", &n1, &n2, &n3, &n4, &n5) == 5) {
        total_sum = n1 + n2 + n3 + n4 + n5;
    }

    fclose(fptr);

    printf("File reading complete.\n");
    printf("\n DATA ANALYSIS REPORT \n");
    printf("Data read: %d, %d, %d, %d, %d\n", n1, n2, n3, n4, n5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}
