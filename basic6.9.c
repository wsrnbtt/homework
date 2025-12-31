#include <stdio.h>

#define MONTHS 3

int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr);
void get_monthly_data(int array[], int size, const char *type);
void print_monthly_data(int array[], int size, const char *type);

int main() {
    int monthly_revenue[MONTHS];
    int monthly_expense[MONTHS];
    int net_profit;
    int business_status;

    get_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    get_monthly_data(monthly_expense, MONTHS, "EXPENSE");

    net_profit = analyze_profitability(monthly_revenue, monthly_expense, MONTHS, &business_status);

    printf("\n 3 MONTH FINANCIAL ANALYSIS REPORT \n");
    print_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    print_monthly_data(monthly_expense, MONTHS, "EXPENSE");
    
    printf("------------------------------------------\n");
    printf("NET PROFIT: %d\n", net_profit);
    printf("BUSINESS STATUS: ");

    if (business_status == 1) {
        printf("PROJECT IS PROFITABLE\n");
    } else {
        printf("PROJECT IS UNPROFITABLE\n");
    }

    return 0;
}

int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr) {
    int total_rev = 0;
    int total_exp = 0;
    int net;

    for (int i = 0; i < size; i++) {
        total_rev += *(rev_ptr + i);
        total_exp += *(exp_ptr + i);
    }

    net = total_rev - total_exp;

    if (status_ptr != NULL) {
        *status_ptr = (net >= 0) ? 1 : 0;
    }

    return net;
}

void get_monthly_data(int array[], int size, const char *type) {
    printf("\n[Input Data] %d Months of %s:\n", size, type);
    for (int i = 0; i < size; i++) {
        printf(" -> Month %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void print_monthly_data(int array[], int size, const char *type) {
    long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    printf("TOTAL %-10s: %ld\n", type, sum);
}
