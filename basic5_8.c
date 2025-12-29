#include <stdio.h>

struct Student {
    int id;
    int math_score;
    int science_score;
    int english_score;
    int total_score;
};

char calculate_grade(int score_sum);
void calculate_average(int score_sum, float *result_ptr);

int main() {
    struct Student student_info;
    char final_grade;
    float final_average;

    printf("Enter Student ID: ");
    scanf("%d", &student_info.id);
    printf("Enter Math Score: ");
    scanf("%d", &student_info.math_score);
    printf("Enter Science Score: ");
    scanf("%d", &student_info.science_score);
    printf("Enter English Score: ");
    scanf("%d", &student_info.english_score);

    student_info.total_score = student_info.math_score + student_info.science_score + student_info.english_score;

    final_grade = calculate_grade(student_info.total_score);
    calculate_average(student_info.total_score, &final_average);

    printf("\n STUDENT ACADEMIC REPORT \n");
    printf("Student ID: %d\n", student_info.id);
    printf("Math Score: %d, Science Score: %d, English Score: %d\n", 
            student_info.math_score, student_info.science_score, student_info.english_score);
    printf("Total Score: %d\n", student_info.total_score);
    printf("Average Score: %.2f\n", final_average);
    printf("Final Grade: %c\n", final_grade);

    return 0;
}

char calculate_grade(int score_sum) {
    char grade_result;
    
    if (score_sum >= 250) {
        grade_result = 'A';
    } else if (score_sum >= 200) {
        grade_result = 'B';
    } else {
        grade_result = 'C';
    }
    
    return grade_result;
}

void calculate_average(int score_sum, float *result_ptr) {
    if (result_ptr != NULL) {
        *result_ptr = score_sum / 3.0f;
    }
}
