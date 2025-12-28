#include <stdio.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

struct studentNode pool[ 5 ] ;

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void GoNext1( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now1, **now2 ;

    start = &pool[ 0 ] ;
    saveNode( start, "one", 6, 'M', 3.11 ) ;

    start->next = &pool[ 1 ] ;
    saveNode( start->next, "two", 8, 'F', 3.22 ) ;

    start->next->next = &pool[ 2 ] ;
    saveNode( start->next->next, "three", 10, 'M', 3.33 ) ;

    start->next->next->next = &pool[ 3 ] ;
    saveNode( start->next->next->next, "four", 12, 'F', 3.44 ) ;
    start->next->next->next->next = NULL ;

    now1 = start ;
    now2 = &start ;

    GoNext1( now1 ) ;

    printf( "%s", now1->name ) ;

    return 0 ;
}

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    int i = 0 ;
    while ( n[ i ] != '\0' ) {
        child->name[ i ] = n[ i ] ;
        i++ ;
    }
    child->name[ i ] = '\0' ; 
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}

void GoNext1( struct studentNode *walk ) {
    if ( walk != NULL && walk->next != NULL ) {
        walk = walk->next ;
    }
}
