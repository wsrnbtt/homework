#include <stdio.h>

int main() {
    int p_code ;
    float usage, bill = 0.0 ;

    if ( scanf( "%d %f", &p_code, &usage ) != 2 ) {
        return 1 ;
    }

    if ( p_code == 1 ) {
        bill = 299.0 ;
        if ( usage > 10.0 ) {
            bill += ( usage - 10.0 ) * 10.0 ;
        }
    } 
    else if ( p_code == 2 ) {
        bill = 599.0 ;
        if ( usage > 20.0 ) {
            bill += 50.0 + ( ( usage - 20.0 ) * 5.0 ) ;
        }
    } 
    else {
        printf( "Invalid Plan Code\n" ) ;
        return 0 ;
    }

    printf( "%.2f\n", bill ) ;

    return 0 ;
}
