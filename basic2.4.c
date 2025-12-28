#include <stdio.h>

int main() {
    float debt, pay_monthly, interest_val ;
    int count_m = 0 ;
    
    float rate = 0.01 ;
    float penalty_fee = 10.0 ;

    //รับค่าเงินต้นและยอดผ่อน
    if ( scanf( "%f %f", &debt, &pay_monthly ) != 2 ) {
        return 1 ;
    }

    //วนลูปจนกว่าหนี้จะหมด
    while ( debt > 0 ) {
        //คำนวณดอกเบี้ยรายเดือน
        interest_val = debt * rate ;
        debt = debt + interest_val ;

        //เช็คเงื่อนไขค่าปรับ
        if ( pay_monthly < interest_val ) {
            debt = debt + penalty_fee ;
        }

        //หักยอดผ่อนชำระ
        debt = debt - pay_monthly ;

        count_m++ ;
        
        //แสดงสถานะรายเดือน
        printf( "Month %d: Remaining Principal = %.2f\n", count_m, debt ) ;
    }

    // สรุปจำนวนเดือน
    printf( "Loan settled in %d months.\n", count_m ) ;

    return 0 ;
}
