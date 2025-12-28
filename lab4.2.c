#include <stdio.h>

void go( int ***ptr_to_a, int **source_ptr ) {
    *ptr_to_a = source_ptr ;
}

int main() {
    int val_b = 10, val_c = 20 ;
    int *b = &val_b ;
    int *c = &val_c ;
    int **a ;

    go( &a, &b ) ;
    printf( "%d %p %p %p\n", **a, (void *)*a, (void *)a, (void *)&a ) ;

    go( &a, &c ) ;
    printf( "%d %p %p %p\n", **a, (void *)*a, (void *)a, (void *)&a ) ;

    return 0 ;
}
