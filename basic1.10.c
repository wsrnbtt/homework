#include <stdio.h>

int main() {
    int lv, age, active ;

    if ( scanf( "%d %d %d", &lv, &age, &active ) != 3 ) {
        return 1 ;
    }

    if ( active == 1 && ( lv == 3 || ( lv == 2 && age >= 25 ) ) ) {
        printf( "Access Granted\n" ) ;
    } 
    else {
        printf( "Access Denied\n" ) ;
    }

    return 0 ;
}
