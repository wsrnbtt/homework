#include <stdio.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

struct studentNode node_pool[10];
int pool_counter = 0;

void saveNode(struct studentNode *child, char n[], int a, char s, float g);
void GoNext1(struct studentNode **walk);
struct studentNode* getNewNode();

int main() {
    struct studentNode *start, *now1;

    start = getNewNode();
    saveNode(start, "one", 6, 'M', 3.11);

    start->next = getNewNode();
    saveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = getNewNode();
    saveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = getNewNode();
    saveNode(start->next->next->next, "four", 12, 'F', 3.44);
    start->next->next->next->next = NULL;

    now1 = start;

    GoNext1(&now1);

    printf("%s ", now1->name);

    return 0;
}

struct studentNode* getNewNode() {
    return &node_pool[pool_counter++];
}

void saveNode(struct studentNode *child, char n[], int a, char s, float g) {
    int i = 0;
    while (n[i] != '\0' && i < 19) {
        child->name[i] = n[i];
        i++;
    }
    child->name[i] = '\0';
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

void GoNext1(struct studentNode **walk) {
    if (*walk != NULL && (*walk)->next != NULL) {
        *walk = (*walk)->next;
        printf( "%s ", ( *walk )->name ) ;
    }
}
