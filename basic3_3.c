#include <stdio.h>

struct Record {
    char student_name[50];
    int id_code;
    float points;
};

int main() {
    int n_count, j;
    float sum_points = 0.0, avg_result;

    if (scanf("%d", &n_count) != 1 || n_count <= 0) {
        return 0;
    }

    struct Record list[n_count];

    for (j = 0; j < n_count; j++) {
        if (scanf("%d %f %s", &list[j].id_code, &list[j].points, list[j].student_name) != 3) {
            break;
        }
        sum_points += list[j].points;
    }

    avg_result = sum_points / n_count;

    printf("Average Score: %.2f\n", avg_result);

    return 0;
}
