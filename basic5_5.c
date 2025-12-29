#include <stdio.h>

#define NUM_STUDENTS 4

struct Student {
    int id;
};

int check_id_existence(struct Student students[], int size, int target_id);

int main() {
    struct Student id_list[NUM_STUDENTS];
    int search_id;
    int is_found;
    int i;

    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &id_list[i].id);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &search_id);

    is_found = check_id_existence(id_list, NUM_STUDENTS, search_id);

    printf("\n ID SEARCH REPORT \n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", id_list[i].id);
    }
    printf("\nSearch ID: %d\n", search_id);

    if (is_found) {
        printf("ID FOUND in the system.\n");
    } else {
        printf("ID NOT FOUND in the system.\n");
    }

    return 0; //
}

int check_id_existence(struct Student students[], int size, int target_id) {
    int idx = 0;
    
    while (idx < size) {
        if (students[idx].id == target_id) {
            return 1;
        }
        idx++;
    }
    
    return 0;
}
