#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

struct studentNode pool[10];
int p_idx = 0;

void saveNode(struct studentNode *child, char n[], int a, char s, float g);
void GoNext2(struct studentNode ***walk); // รับ Triple Pointer เพื่อเปลี่ยนค่า Double Pointer ใน main

int main() {
    struct studentNode *start, *now1, **now2;

    start = &pool[p_idx++];
    saveNode(start, "one", 6, 'M', 3.11);

    start->next = &pool[p_idx++];
    saveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = &pool[p_idx++];
    saveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = &pool[p_idx++];
    saveNode(start->next->next->next, "four", 12, 'F', 3.44);
    start->next->next->next->next = NULL;

    now1 = start;
    now2 = &now1;

    GoNext2(&now2);

    printf("%s ", (*now2)->name);

    return 0;
}

void GoNext2(struct studentNode ***walk) {

    if (walk != NULL && *walk != NULL && (**walk) != NULL && (**walk)->next != NULL) {

        **walk = (**walk)->next;

        printf("%s ", (**walk)->name);
        
    } else {
        printf("No next node. ");
    }
}

void saveNode(struct studentNode *child, char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
    child->next = NULL;
}
