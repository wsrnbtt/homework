#include <stdio.h>

struct Learner {
    char name[50];
    int id;
    float marks;
};

int main() {
    int n, k;
    int p_cnt = 0, f_cnt = 0;

    if (scanf("%d", &n) != 1) return 0;

    struct Learner data[n];

    for (k = 0; k < n; k++) {
        if (scanf("%d %f %s", &data[k].id, &data[k].marks, data[k].name) == 3) {
            
            if (data[k].marks >= 60.0) {
                p_cnt++;
            } else {
                f_cnt++;
            }
        }
    }

    printf("Pass Count: %d\n", p_cnt);
    printf("Fail Count: %d\n", f_cnt);

    return 0;
}
