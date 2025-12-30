#include <stdio.h>

#define SIZE 5

int calculate_net_balance(int *trans_array, int size, int *status_ptr);

int main() {
    int transactions[SIZE];
    int net_balance;
    int finance_status; 
    int i;

    printf("Enter %d transactions (Income +, Expense -):\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf(" -> Record #%d: ", i + 1);
        scanf("%d", &transactions[i]);
    }

    net_balance = calculate_net_balance(transactions, SIZE, &finance_status);

    printf("\n PERSONAL FINANCE REPORT \n");
    printf("Transactions Recorded: ");
    for (i = 0; i < SIZE; i++) {
        printf("[%d] ", transactions[i]);
    }
    
    printf("\n--------------------------------\n");
    printf("Net Balance: %d\n", net_balance);
    printf("Status     : ");
    if (finance_status == 1) {
        printf("PROFIT\n");
    } else {
        printf("LOSS\n");
    }

    return 0;
}

int calculate_net_balance(int *trans_array, int size, int *status_ptr) {
    int total = 0;

    for (int j = 0; j < size; j++) {
        total += *(trans_array + j); 
    }

    if (status_ptr != NULL) {
        if (total >= 0) {
            *status_ptr = 1; // PROFIT
        } else {
            *status_ptr = 0; // LOSS
        }
    }

    return total;
}
