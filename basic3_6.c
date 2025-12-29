#include <stdio.h>

struct FinanceRecord {
    char note[50];
    float value;
};

int main() {
    int count, j;
    float sum_in = 0.0, sum_out = 0.0, balance = 0.0;

    if (scanf("%d", &count) != 1) return 0;

    struct FinanceRecord list[count];

    for (j = 0; j < count; j++) {

        if (scanf("%f %s", &list[j].value, list[j].note) != 2) break;

        if (list[j].value > 0) {
            sum_in += list[j].value;
        } else {

            sum_out += (list[j].value * -1.0);
        }
    }

    balance = sum_in - sum_out;

    printf("Total Income: %.2f\n", sum_in);
    printf("Total Expense: %.2f\n", sum_out);
    printf("Net Balance: %.2f\n", balance);

    return 0;
}
