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

    aboy.sex = 'M';
    aboy.gpa = 3.00;

    // ส่งที่อยู่ของ aboy ไปให้ฟังก์ชัน
    upgrade(&aboy);

    // แสดงผล GPA ที่คำนวณเสร็จแล้ว
    printf("%.2f", aboy.gpa);

    return 0;
}

// ฟังก์ชันสำหรับเพิ่ม GPA โดยรับเป็นตัวชี้(Pointer)
void upgrade(struct student *child) 
{
    // ใช้ if-else เช็คเงื่อนไขตามเพศ
    if (child->sex == 'M') 
    {
        child->gpa *= 1.10f; 
    } 
    else if (child->sex == 'F') 
    {
        // สำหรับผู้หญิงเพิ่ม 20%
        child->gpa *= 1.20f;
    }
}
