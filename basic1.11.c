#include <stdio.h>

int main() {
    int cat_code ;
    float price, total, vat ;

    if ( scanf( "%f %d", &price, &cat_code ) != 2 ) {
        return 1 ;
    }

    switch ( cat_code ) {
        case 1 :
            total = price * 1.07 ;
            break ;
        case 2 :
            total = price ;
            break ;
        case 3 :
            total = price * 1.15 ;
            break ;
        default :
            printf( "Invalid Category\n" ) ;
            return 0 ;
    }

    vat = total - price ;

    printf( "VAT Amount: %.2f\n", vat ) ;
    printf( "Total Price: %.2f\n", total ) ;

    return 0 ;
}
