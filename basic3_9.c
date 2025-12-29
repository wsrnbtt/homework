#include <stdio.h>

int main() {
    int total_days, i;
    float current_balance;

    if (scanf("%f %d", &current_balance, &total_days) != 2) return 0;

    printf("Day | Spend | Remaining\n");

    for (i = 1; i <= total_days; i++) {
        float expense;

        if (current_balance >= 500.00f) {
            expense = 100.00f;
        } else if (current_balance >= 100.00f) {
            expense = 50.00f;
        } else if (current_balance > 0.0f) {
            expense = 20.00f;
        } else {
            expense = 0.0f;
        }

        if (expense > current_balance) {
            expense = current_balance;
        }

        current_balance -= expense;

        printf("%d | %.2f | %.2f\n", i, expense, current_balance);
    }

    printf("Final Budget: %.2f\n", current_balance);

    return 0;
}
