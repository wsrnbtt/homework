#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    int total_students, idx;

    if (scanf("%d", &total_students) != 1) {
        return 0;
    }

    struct Student list[total_students];

    for (idx = 0; idx < total_students; idx++) {
        if (scanf("%d %f %s", &list[idx].id, &list[idx].gpa, list[idx].name) != 3) {
            break;
        }
    }

    for (idx = 0; idx < total_students; idx++) {
        printf("ID: %d, Score: %.2f, Name: %s\n", list[idx].id, list[idx].gpa, list[idx].name);
    }

    return 0;
}
