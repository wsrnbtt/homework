#include <stdio.h>

struct Product {
    char title[60];
    float price;
    int amount;
};

int main() {
    int n, j;
    float sum_before_vat = 0.0;
    const float VAT_PERCENT = 0.07f;

    if (scanf("%d", &n) != 1) return 0;

    struct Product list[n];

    for (j = 0; j < n; j++) {
        if (scanf("%s %f %d", list[j].title, &list[j].price, &list[j].amount) != 3) {
            break;
        }
    }

    printf("RECEIPT\n");
    for (j = 0; j < n; j++) {
        float line_total = list[j].price * list[j].amount;
        printf("%s x %d = %.2f\n", list[j].title, list[j].amount, line_total);
        sum_before_vat += line_total;
    }

    float vat_amount = sum_before_vat * VAT_PERCENT;
    float final_price = sum_before_vat + vat_amount;

    printf("Subtotal: %.2f\n", sum_before_vat);
    printf("VAT (7%%): %.2f\n", vat_amount);
    printf("Grand Total: %.2f\n", final_price);

    return 0;
}
