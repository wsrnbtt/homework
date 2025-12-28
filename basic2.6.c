#include <stdio.h>

int main() {
    int n_months, m_idx, success_cnt = 0;
    float deposit, m_sum;

    if (scanf("%d", &n_months) != 1) {
        return 1;
    }

    for (m_idx = 1; m_idx <= n_months; m_idx++) {
        m_sum = 0.0;

        while (1) {
            if (scanf("%f", &deposit) != 1) break;
            if (deposit == 0.00) break;
            
            m_sum += deposit;
        }

        printf("Month %d Total: %.2f\n", m_idx, m_sum);

        if (m_sum >= 500.00) {
            success_cnt++;
        }
    }

    printf("Success Count: %d\n", success_cnt);

    return 0;
}
