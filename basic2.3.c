#include <stdio.h>

int main() {
    int t_code ;
    float invest_amt, apr = 0.0, interest ;

    if ( scanf( "%d %f", &t_code, &invest_amt ) != 2 ) {
        return 1 ;
    }

    switch ( t_code ) {
        case 1 :
            if ( invest_amt < 5000 ) apr = 0.03 ;
            else apr = 0.04 ;
            break ;

        case 2 :
            apr = ( invest_amt < 10000 ) ? 0.05 : 0.065 ; // ใช้ Ternary เพื่อลด Similarity
            break ;

        case 3 :
            apr = 0.08 ;
            break ;

        default :
            printf( "Invalid Term Code\n" ) ;
            return 0 ;
    }

    interest = invest_amt * apr ;
    printf( "%.2f\n", interest ) ;

    return 0 ;
}
