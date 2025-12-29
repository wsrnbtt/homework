    #include <stdio.h>
    
    void printReverse(int arr[], int size) {
        int j;
        // เริ่มจาก index สุดท้าย (size - 1) ถอยลงมาจนถึง 0
        for (j = size - 1; j >= 0; j--) {
            printf("%d\n", arr[j]);
        }
    }
    
    int main() {
        int total_elements, i;
    
        //รับจำนวนข้อมูล
        if (scanf("%d", &total_elements) != 1 || total_elements <= 0) {
            return 0; 
        }
    
        //ประกาศ Array
        int data_list[total_elements];
    
        //วนลูปรับค่าข้อมูล
        for (i = 0; i < total_elements; i++) {
            if (scanf("%d", &data_list[i]) != 1) {
                break;
            }
        }
    
        printf("--Output--\n");
        printReverse(data_list, total_elements); //เรียกใช้ฟังก์ชันแสดงผลย้อนกลับ
    
        return 0;
    }
