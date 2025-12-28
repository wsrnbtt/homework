#include <stdio.h>

int main() {
    int input_score;
    //กำหนดตัวนับแยกเกรดแต่ละตัว
    int a_total = 0, b_total = 0, c_total = 0, d_total = 0, f_total = 0;

    //รับคะแนนตัวแรกก่อนเริ่มลูป
    if (scanf("%d", &input_score) != 1) {
        return 1;
    }

    //วนลูปรับคะแนนจนกว่าจะป้อน -1
    while (input_score != -1) {
        //ตรวจสอบเงื่อนไขตัดเกรดตามช่วงคะแนน
        if (input_score >= 80) {
            a_total++;
        } else if (input_score >= 70) {
            b_total++;
        } else if (input_score >= 60) {
            c_total++;
        } else if (input_score >= 50) {
            d_total++;
        } else {
            f_total++;
        }

        //รับคะแนนตัวถัดไปภายในลูป
        if (scanf("%d", &input_score) != 1) {
            break;
        }
    }

    //แสดงผลสรุปจำนวนนักเรียนในแต่ละเกรด
    printf("Grade A Count: %d\n", a_total);
    printf("Grade B Count: %d\n", b_total);
    printf("Grade C Count: %d\n", c_total);
    printf("Grade D Count: %d\n", d_total);
    printf("Grade F Count: %d\n", f_total);

    return 0;
}
