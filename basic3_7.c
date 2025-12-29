#include <stdio.h>

struct SalesRecord {
    char name[50];
    float target;
    float actual;
};

int main() {
    int N, i;
    double grandTotalCommission = 0.0;

    if (scanf("%d", &N) != 1) return 0;

    for (i = 0; i < N; i++) {
        struct SalesRecord person;
        float comm;

        if (scanf("%f %f %s", &person.target, &person.actual, person.name) != 3) break;

        comm = person.actual * 0.10f;

        if (person.actual > person.target * 1.20f) {
            comm += 200.0f; 
        } 
        else if (person.actual >= person.target) {
            comm += 50.0f;  
        } 
        else if (person.actual < person.target * 0.90f) {
            comm -= 100.0f; 
        }

        grandTotalCommission += (double)comm;
    }

    printf("Grand Total Commission: %.2f\n", grandTotalCommission);

    return 0;
}
