#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;

    aboy = upgrade( aboy ) ;

    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}

struct student upgrade( struct student child ) {
    switch (child.sex) {
        case 'M': 
            child.gpa += (child.gpa * 0.10f) ; 
            break ;
        case 'F': 
            child.gpa += (child.gpa * 0.20f) ; 
            break ;
    }
    return child ;
}
