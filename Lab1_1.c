#include <stdio.h>

int main()
{ 
    int numberOfLines;  // จำนวนรอบที่ต้องการพิมพ์

    scanf("%d", &numberOfLines);  // รับค่าจากผู้ใช้

    if (numberOfLines <= 0)  // ตรวจสอบความถูกต้องของอินพุต
    {
        printf("error\n");
        return 1;
    }

    for (int i = 1; i <= numberOfLines; i++)   // พิมพ์ข้อความตามจำนวนที่กำหนด
    {
        printf("Hello World\n"); 
    }

    return 0;   // จบโปรแกรม

}
