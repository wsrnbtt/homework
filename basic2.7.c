#include <stdio.h>

int main() {
    int max_num, val;
    int fb_cnt = 0, f_cnt = 0, b_cnt = 0, other_cnt = 0;

    if (scanf("%d", &max_num) != 1) {
        return 1;
    }

    for (val = 1; val <= max_num; val++) {
        
        if (val % 15 == 0) {
            fb_cnt++;
        } 

        else if (val % 3 == 0) {
            f_cnt++;
        } 

        else if (val % 5 == 0) {
            b_cnt++;
        } 

        else {
            other_cnt++;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n", fb_cnt);
    printf("Count Fizz (by 3 only): %d\n", f_cnt);
    printf("Count Buzz (by 5 only): %d\n", b_cnt);
    printf("Count Other: %d\n", other_cnt);

    return 0;
}
