#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade(struct student child);

int main() 
{
    struct student aboy;
    
    aboy.sex = 'M';
    aboy.gpa = 3.00f;

    aboy = upgrade(aboy);

    printf("%.2f", aboy.gpa);

    return 0;
}

struct student upgrade(struct student child) 
{
    switch (child.sex) 
    {
        case 'M':
            // เพิ่ม 10% สำหรับผู้ชาย
            child.gpa = child.gpa * 1.10f;
            break;
            
        case 'F':
            // เพิ่ม 20% สำหรับผู้หญิง
            child.gpa = child.gpa * 1.20f;
            break;
            
        default:
            // กรณีระบุเพศไม่ชัดเจน ไม่ปรับเกรด
            break;
    }

    return child;
}
