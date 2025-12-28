#include <stdio.h>

int main() {
    int n_students, i;
    int id, score, total, absent;
    float att_rate;
    int passed = 0, failed = 0;

    if (scanf("%d", &n_students) != 1) return 0;

    for (i = 0; i < n_students; i++) {

        if (scanf("%d %d %d %d", &id, &score, &total, &absent) != 4) break;

        att_rate = ((float)(total - absent) / total) * 100.0;

        printf("Student ID %d: ", id);

        if (score >= 50 && att_rate >= 75.0) {
            printf("PASS\n");
            passed++;
        } 
        else {
            printf("FAIL (");

            if (score < 50 && att_rate < 75.0) {
                printf("Both Score and Attendance");
            } else if (score < 50) {
                printf("Score");
            } else {
                printf("Attendance");
            }
            printf(")\n");
            failed++;
        }
    }

    printf("\nSummary\n");
    printf("Total PASS: %d\n", passed);
    printf("Total FAIL: %d\n", failed);

    return 0;
}
