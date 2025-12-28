#include <stdio.h>

int main() {
    int score ;

    if ( scanf( "%d", &score ) != 1 ) {
        return 1 ;
    }

    if ( score < 50 ) {
        printf( "Grade F" ) ;
    } 
    else if ( score < 60 ) {
        printf( "Grade D" ) ;
    } 
    else if ( score < 70 ) {
        printf( "Grade C" ) ;
    } 
    else if ( score < 80 ) {
        printf( "Grade B" ) ;
    } 
    else {
        printf( "Grade A" ) ;
    }

    return 0 ;
}
