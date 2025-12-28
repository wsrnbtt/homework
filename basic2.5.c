#include <stdio.h>

int main() {
    int score;
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    while ( 1 ) {
        if ( scanf( "%d", &score ) != 1 ) {
            break;
        }

        if ( score == -1 ) {
            break;
        }

        if ( score >= 80 ) {
            a++;
        } else if ( score >= 70 ) {
            b++;
        } else if ( score >= 60 ) {
            c++;
        } else if ( score >= 50 ) {
            d++;
        } else {

            f++;
        }
    }

    printf( "Grade A Count: %d\n", a );
    printf( "Grade B Count: %d\n", b );
    printf( "Grade C Count: %d\n", c );
    printf( "Grade D Count: %d\n", d );
    printf( "Grade F Count: %d\n", f );

    return 0;
}
