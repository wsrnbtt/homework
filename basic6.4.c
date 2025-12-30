#include <stdio.h>

void calculate_sum_product(int n1, int n2, int *ptr_s, int *ptr_p);

int main() {
    int val_A, val_B;
    int result_sum = 0; 
    int result_product = 0;

    printf("Enter first integer (Val A): ");
    scanf("%d", &val_A);
    printf("Enter second integer (Val B): ");
    scanf("%d", &val_B);

    calculate_sum_product(val_A, val_B, &result_sum, &result_product);

    printf("\n CALCULATION REPORT \n");
    printf("Input Values: A = %d, B = %d\n", val_A, val_B);
    
    printf("Calculated Sum (A + B)     : %d\n", result_sum);
    printf("Calculated Product (A * B) : %d\n", result_product);

    return 0;
}

void calculate_sum_product(int n1, int n2, int *ptr_s, int *ptr_p) {
    int s_val = n1 + n2;
    int p_val = n1 * n2;

    if (ptr_s != NULL) *ptr_s = s_val;
    if (ptr_p != NULL) *ptr_p = p_val;
}
