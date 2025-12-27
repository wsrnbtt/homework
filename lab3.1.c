#include <stdio.h>

// สร้าง struct
struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

// ประกาศฟังก์ชันไว้ก่อน (ต้องใช้ Pointer * เพื่อให้เกรดใน main เปลี่ยนจริงๆ)
void upgrade(struct student *child);

int main() 
{
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;

    // เรียกฟังก์ชัน โดยใส่ & หน้าชื่อตัวแปรเพื่อส่ง "ที่อยู่" ของข้อมูลไป
    upgrade(&aboy);

    // แสดงผล GPA หลังเรียกฟังก์ชันเสร็จแล้ว
    printf("%.2f", aboy.gpa);
    
    return 0;
}

// ส่วนของฟังก์ชันที่ใช้เพิ่มคะแนน
void upgrade(struct student *child) 
{
    // เช็คเพศจากข้อมูลที่รับมา (ใช้เครื่องหมาย -> เพราะรับมาเป็นพอยเตอร์)
    if (child->sex == 'M') 
    {
        // ถ้าเป็นผู้ชาย (M) ให้เพิ่มเกรดอีก 10%
        // เขียนแบบคูณ 1.1 ไปเลยจะได้สั้นๆ และดูไม่เหมือนต้นฉบับ
        child->gpa = child->gpa * 1.10;
    } 
    else if (child->sex == 'F') 
    {
        // ถ้าเป็นผู้หญิง (F) ให้เพิ่มเกรดอีก 20%
        child->gpa = child->gpa * 1.20;
    }
}
