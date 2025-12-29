#include <stdio.h>

struct Product {
    char item_id[20];
    float cost_price;
    float sell_price;
    int stock_quantity;
};

float calculate_total_profit(float c_val, float s_val, int amount);
float calculate_profit_percentage(float c_val, float s_val);

int main() {
    struct Product item;
    float profit_sum;
    float p_ratio;

    printf("Enter Item ID: ");
    scanf("%s", item.item_id); 

    printf("Enter Cost Price: ");
    scanf("%f", &item.cost_price);

    printf("Enter Selling Price: ");
    scanf("%f", &item.sell_price);

    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);

    profit_sum = calculate_total_profit(item.cost_price, item.sell_price, item.stock_quantity);
    p_ratio = calculate_profit_percentage(item.cost_price, item.sell_price);

    printf("\n INVENTORY PROFIT REPORT \n");
    printf("Item ID: %s\n", item.item_id);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", 
            item.cost_price, item.sell_price, item.stock_quantity);
    printf("Total Profit: %.2f\n", profit_sum);
    printf("Profit Percentage: %.2f%%\n", p_ratio);

    if (profit_sum > 0.0) {
        printf("Status: Profit!\n");
    } else if (profit_sum < 0.0) {
        printf("Status: Loss!\n");
    } else {
        printf("Status: Break Even.\n");
    }

    return 0;
}

float calculate_total_profit(float c_val, float s_val, int amount) {
    return (s_val - c_val) * (float)amount;
}

float calculate_profit_percentage(float c_val, float s_val) {
    if (c_val <= 0.0) return 0.0;
    return ((s_val - c_val) / c_val) * 100.0f;
}
