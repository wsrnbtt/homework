#include <stdio.h>

void printReverse(int arr[], int size) {
    int j;
    for (j = size - 1; j >= 0; j--) {
        printf("%d\n", arr[j]);
    }
}

int main() {
    int total_elements, i;

    if (scanf("%d", &total_elements) != 1 || total_elements <= 0) {
        return 0; 
    }

    int data_list[total_elements];

    for (i = 0; i < total_elements; i++) {
        if (scanf("%d", &data_list[i]) != 1) {
            break;
        }
    }
    printf("--Output--\n");
    printReverse(data_list, total_elements);

    return 0;
}
