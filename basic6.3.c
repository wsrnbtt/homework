#include <stdio.h>

#define SIZE 3

int main() {
    int data[SIZE];
    int *ptr = NULL;
    int i;

    printf("Input %d integer values for the array list:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf(" -> Data at Index [%d]: ", i);
        scanf("%d", &data[i]);
    }

    ptr = &data[0];

    printf("\n ARRAY AND POINTER REPORT \n");
    printf("%-7s| %-14s | %-19s | %-15s\n", "Index", "Direct Access", "Pointer Access", "Memory Address");

    for (i = 0; i < SIZE; i++) {
        int value_via_ptr = *(ptr + i);
        void* address_ptr = (void*)(ptr + i);

        printf("  #%d   | %14d | %19d | %p\n",
            i,
            data[i],
            value_via_ptr,
            address_ptr
        );
    }

    return 0;
}
