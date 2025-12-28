#include <stdio.h>

int main() {
    int tCode ;
    float amount, apr = 0.0, interest_earned ;

    if ( scanf( "%d %f", &tCode, &amount ) == 2 ) {
        
        switch ( tCode ) {
            case 1 :
                if ( amount < 5000 ) apr = 0.03 ;
                else apr = 0.04 ;
                break ;
            case 2 :
                if ( amount < 10000 ) apr = 0.05 ;
                else apr = 0.065 ;
                break ;
            case 3 :
                apr = 0.08 ;
                break ;
            default :
                printf( "Invalid Term Code\n" ) ;
                return 0 ; 
        }

        interest_earned = amount * apr ;
        printf( "%.2f\n", interest_earned ) ;

    }

    return 0 ;
}
