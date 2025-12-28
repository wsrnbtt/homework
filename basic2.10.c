#include <stdio.h>

int main() {
    float bal, penalty, amt, interest, apr;
    float total_penalty = 0.0;
    int n, cmd, i;

    if (scanf("%f %f %d", &bal, &penalty, &n) != 3) return 0;

    printf("Starting Balance: %.2f\n", bal);

    for (i = 1; i <= n; i++) {
        if (scanf("%d %f", &cmd, &amt) != 2) break;

        printf("--- Month %d ---\n", i);

        if (cmd == 1) {
            bal += amt;
            printf("Deposit: %.2f\n", amt);
        } 
        else if (cmd == 2) {
            if (amt <= bal) {
                bal -= amt;
                printf("Withdrawal: %.2f\n", amt);
            } else {
                bal -= penalty;
                total_penalty += penalty;
                printf("WITHDRAWAL FAILED. Penalty (%.2f) applied\n", penalty);
            }
        } 
        else if (cmd == 3) { // Interest
            if (bal < 1000.0) apr = 1.0;
            else apr = 2.5;
            
            interest = bal * (apr / 100.0) / 12.0;
            bal += interest;
            printf("Interest: %.2f (Rate: %.1f%%)\n", interest, apr);
        }
    }

    printf("Final Balance: %.2f\n", bal);
    printf("Total Penalties: %.2f\n", total_penalty);

    return 0;
}
