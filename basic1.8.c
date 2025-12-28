#include <stdio.h>

int main() {
    int dCode, hVal ;

    if ( scanf( "%d %d", &dCode, &hVal ) != 2 ) {
        return 1 ;
    }

    switch ( dCode ) {
        case 1 : case 2 : case 3 : case 4 : case 5 :
            if ( hVal >= 8 && hVal <= 17 ) {
                printf( "System Running (Workday)\n" ) ;
            } else {
                printf( "System Idle (Off-hours)\n" ) ;
            }
            break ;

        case 6 : 
        case 7 :
            printf( "Weekend Relax Mode\n" ) ;
            break ;

        default :
            printf( "Invalid Day Code\n" ) ;
            break ;
    }

    return 0 ;
}
