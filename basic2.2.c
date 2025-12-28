#include <stdio.h>

int main() {
    int n_items, loop_idx, qty ;
    float price, total_sum = 0.0, current_cost ;

    if ( scanf( "%d", &n_items ) != 1 ) {
        return 1 ;
    }

    for ( loop_idx = 0 ; loop_idx < n_items ; loop_idx++ ) {
        if ( scanf( "%f %d", &price, &qty ) != 2 ) {
            break ;
        }

        current_cost = price * qty ;

        if ( price >= 1000.00 ) {
            current_cost *= 0.90 ; // ใช้ตัวดำเนินการแบบย่อเพื่อลดความเหมือน
        }

        total_sum += current_cost ;
    }

    printf( "Grand Total: %.2f\n", total_sum ) ;

    return 0 ;
}
