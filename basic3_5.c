#include <stdio.h>

struct Purchase {
    int id;
    float price;
    int qty;
};

int main() {
    int n, idx;
    float total_bill = 0.0;
    const float SHIP_COST = 50.0;
    if (scanf("%d", &n) != 1) return 0;

    struct Purchase list[n];

    for (idx = 0; idx < n; idx++) {
        float sub_total;

        if (scanf("%d %f %d", &list[idx].id, &list[idx].price, &list[idx].qty) != 3) {
            break;
        }

        sub_total = (list[idx].price * list[idx].qty) + SHIP_COST;

        if (sub_total >= 500.0) {
            sub_total = sub_total * 0.90;
        }

        total_bill += sub_total;
    }

    printf("Grand Total: %.2f\n", total_bill);

    return 0;
}
