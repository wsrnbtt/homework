#include <stdio.h>

int main() {
    float balance, monthly_pay, m_interest;
    int months = 0;

    if (scanf("%f %f", &balance, &monthly_pay) != 2) {
        return 1;
    }

    while (balance > 0) {
        m_interest = balance * 0.01;
        balance += m_interest;

        if (monthly_pay < m_interest) {
            balance += 10.0;
        }

        balance -= monthly_pay;
        months++;

        printf("Month %d: Remaining Principal = %.2f\n", months, balance);

        if (months >= 10 && balance > 0) {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    printf("Loan settled in %d months.\n", months);

    return 0;
}
