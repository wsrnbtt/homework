#include <stdio.h>

struct Student {
    int student_id;
    int score;
    char grade;
};

void calculate_grade(struct Student *s_ptr);
void display_menu();

int main() {
    struct Student record = {0, 0, '-'}; 
    int choice;

    do {
        display_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &record.student_id);
                printf("Enter Score (0-100): ");
                scanf("%d", &record.score);
                calculate_grade(&record);
                printf("Data updated. Grade calculated.\n");
                break;

            case 2:
                if (record.student_id == 0) {
                    printf("\n No Student data has been entered yet (ID is 0).\n");
                } else {
                    printf(" --- STUDENT ACADEMIC REPORT --- \n");
                    printf("Student ID : %d\n", record.student_id);
                    printf("Exam Score : %d\n", record.score);
                    printf("Final Grade: %c\n", record.grade);
                }
                break;

            case 3:
                printf(" Exiting Program. Goodbye! \n");
                break;

            default:
                printf(" Invalid Choice. Please try again. \n");
        }
    } while (choice != 3);

    return 0;
}

void calculate_grade(struct Student *s_ptr) {
    if (s_ptr == NULL) return;

    int current_score = s_ptr->score;

    if (current_score >= 80) {
        s_ptr->grade = 'A';
    } else if (current_score >= 70) {
        s_ptr->grade = 'B';
    } else if (current_score >= 60) {
        s_ptr->grade = 'C';
    } else if (current_score >= 50) {
        s_ptr->grade = 'D';
    } else {
        s_ptr->grade = 'F';
    }
}

void display_menu() {
    printf("\n STUDENT RECORD MENU \n");
    printf(" 1) Input/Update Studen Data\n");
    printf(" 2) View Student Report\n");
    printf(" 3) Exit Program \n");
    printf(" Enter choice: ");
}
