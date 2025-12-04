#include <stdio.h>

int GetSet( int [] ); //prototype

int main(){
    int data[20];
    int num_count;

    num_count = GetSet(data);
    
    if (num_count >0){
        printf("สมาชิกที่อ่านได้ (%d ตัว): ", num_count);

        for (int i = 0; i < num_count; i++){
            printf("%d ", data[i]);
        }
        printf("\n");
    }else {
        printf("\n ไม่มีสมาชิกที่อ่านได้ หรือป้อนข้อมูลผิด\n");
    }
    
    return 0; //จบฟังก์ชันmain

}

int GetSet(int data[]){
    int N; // ตัวแปร

    printf("\n--- ฟังก์ชัน GetSet: ---- \n");
    printf("ป้อนจำนวนสมาชิก (max20): ");

    //ตรวจ input
    if (scanf("%d", &N) != 1 || N <= 0 || N >20) {
        printf("! การป้อนจำนวนสมาชิกไม่ถูก \n");
        return 0; //คืนค่าถ้าไม่ถูก
    }

    printf("ป้อนค่าสมาชิก %d ตัว :\n",N);

    //ลูปเพื่อรับสมาชิกแต่บะตัว
    for (int i = 0; i < N; i++){

        if (scanf("%d", &data[i]) != 1) {
            //ถ้าผิดพลาด
            printf("! การป้อนข้อมูลขัดจังหวะ อ่านได้เพียง %d ตัว\n", i);
            return i; //คืนค่าจำนวนที่อ่านได้
        }
    }

    return N;  //คืนค่าจำนวนสมาชิกทั้งหมด
}
