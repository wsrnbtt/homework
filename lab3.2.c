#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student *child);

int main() 
{
    struct student aboy;

    // กำหนดค่าเริ่มต้นให้กับตัวแปร aboy
    aboy.sex = 'M';
    aboy.gpa = 3.00;

    upgrade(&aboy);

    // แสดงผลลัพธ์ทศนิยม 2 ตำแหน่ง
    printf("%.2f", aboy.gpa);

    return 0;
}

void upgrade(struct student *child) 
{
    if (child->sex == 'M') 
    {
        child->gpa = child->gpa + (child->gpa * 0.10);
    } 
    else if (child->sex == 'F') 
    {
        // เพิ่ม 20% สำหรับนักเรียนหญิง
        child->gpa = child->gpa + (child->gpa * 0.20);
    }
}
