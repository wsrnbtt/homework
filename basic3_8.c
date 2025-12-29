#include <stdio.h>

struct Promo {
    char label[50];
    float unit_price;
    int units_sold;
    float ad_budget;
};

int main() {
    int total_n, j;

    if (scanf("%d", &total_n) != 1) return 0;

    struct Promo list[total_n];

    for (j = 0; j < total_n; j++) {
        if (scanf("%s %f %d %f", list[j].label, &list[j].unit_price, 
                  &list[j].units_sold, &list[j].ad_budget) != 4) break;
\
        float r;
        if (list[j].units_sold >= 20) r = 0.20f;
        else if (list[j].units_sold >= 10) r = 0.15f;
        else r = 0.10f;

        float income = list[j].units_sold * list[j].unit_price;
        float comm_earned = income * r;
        float net_diff = comm_earned - list[j].ad_budget;

        printf("--- Campaign: %s ---\n", list[j].label);
        printf("Sales: %d, Ad Spend: %.2f\n", list[j].units_sold, list[j].ad_budget);
        printf("Rate Used: %.0f%%\n", r * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n", income, r * 100, list[j].ad_budget, net_diff);
        printf("Net Result: %.2f\n", net_diff);
    }

    return 0;
}
