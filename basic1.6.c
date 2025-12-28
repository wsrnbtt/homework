#include <stdio.h>

int main() {
    int input_num ;

    do {
        printf( "Enter a number (1-10): " ) ;
        
        if ( scanf( "%d", &input_num ) != 1 ) {
            break ;
        }

        if ( input_num < 1 || input_num > 10 ) {
            printf( "Error: Value must be 1-10.\n" ) ;
        }

    } while ( input_num < 1 || input_num > 10 ) ;

    printf( "Input accepted: %d\n", input_num ) ;

    return 0 ;
}
