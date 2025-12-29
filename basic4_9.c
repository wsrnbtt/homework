#include <stdio.h>

float getTaxRate(int grossSalary) {
    if (grossSalary < 20000) {
        return 0.00;
    } 
    else if (grossSalary < 50000) {
        return 0.05;
    } 
    else {
        return 0.10;
    }
}

int main() {
    int gross_salary;
    float tax_rate = 0.0;
    float tax_amount = 0.0;
    float net_salary = 0.0;

    if (scanf("%d", &gross_salary) != 1) {
        return 1;
    }

    tax_rate = getTaxRate(gross_salary);

    tax_amount = gross_salary * tax_rate;
    net_salary = (float)gross_salary - tax_amount;

    printf("\n SALARY CALCULATION REPORT \n");
    printf("Gross Salary: %d THB\n", gross_salary);

    printf("Tax Rate Applied: %.0f%%\n", tax_rate * 100);

    printf("Tax Amount Deducted: %.2f THB\n", tax_amount);
    printf("Net Salary: %.2f THB\n", net_salary);

    return 0;
}
