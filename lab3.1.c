#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student info) 
{
    
    switch (info.sex) 
    {
        case 'M':
            // เพิ่มเกรด 10% สำหรับผู้ชาย
            info.gpa += (info.gpa * 0.10f);
            break;
        
        case 'F':
            // เพิ่มเกรด 20% สำหรับผู้หญิง
            info.gpa += (info.gpa * 0.20f);
            break;

        default:
            break;
    }
}

int main() 
{
    struct student aboy;
    
    aboy.sex = 'M';
    aboy.gpa = 3.00f;

    upgrade(aboy);

    printf("%.2f", aboy.gpa);

    return 0;
}
