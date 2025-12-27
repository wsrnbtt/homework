#include <stdio.h>

struct student {
    char name[20];
    int age;
    float gpa;
};

struct student (*GetStudent(int *room))[10];

int main() 
{
    struct student (*children)[10];
    int group;

    children = GetStudent(&group);

    return 0;
}

struct student (*GetStudent(int *room))[10] 
{
    static struct student data[20][10];
    int r, s; //  r = room, s = student

    printf("Number of rooms: ");
    if (scanf("%d", room) != 1) return NULL;

    for (r = 0; r < *room; r++) 
    {
        printf("\n-- Room %d --\n", r + 1);
        

        for (s = 0; s < 10; s++) 
        {
            printf("[%d] Name: ", s + 1);
            scanf("%s", data[r][s].name);
            
            printf("[%d] Age: ", s + 1);
            scanf("%d", &data[r][s].age);
            
            printf("[%d] GPA: ", s + 1);
            scanf("%f", &data[r][s].gpa);
        }
    }

    return data;
}
