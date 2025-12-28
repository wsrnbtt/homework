#include <stdio.h>

int main() {
    int n_input, counter ;

    if ( scanf( "%d", &n_input ) != 1 ) {
        return 1 ;
    }

    if ( n_input <= 0 ) {
        printf( "Error\n" ) ;
    } 
    else {
        for ( counter = 0 ; counter < n_input ; counter++ ) {
            printf( "Hello Loop!\n" ) ;
        }
    }

    return 0 ;
}
