#include <stdio.h>

struct ScoreSummary {
    int sumOfPass;
    int countOfFail;
};

void analyzeScores(int arr[], int size, struct ScoreSummary *result) {
    result->sumOfPass = 0;
    result->countOfFail = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 50) {
            result->sumOfPass += arr[i];
        } else {
            result->countOfFail++;
        }
    }
}

int main() {
    int total_students, i;

    if (scanf("%d", &total_students) != 1 || total_students <= 0) {
        return 0;
    }

    int score_list[total_students];
    struct ScoreSummary report;

    for (i = 0; i < total_students; i++) {
        scanf("%d", &score_list[i]);
    }

    analyzeScores(score_list, total_students, &report);

    printf("Passing Scores Sum: %d\n", report.sumOfPass);
    printf("Failing Students Count: %d\n", report.countOfFail);

    return 0;
}
