#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    float gpa;
};

void GetStudent( struct student child[][ 10 ], int *room );

int main() {
    struct student children[ 20 ][ 10 ];
    int group;

    GetStudent( children, &group );

    return 0;
}

void GetStudent( struct student child[][ 10 ], int *room ) {
    int r, s;

    printf( "Input number of rooms: " );
    if ( scanf( "%d", room ) != 1 ) return;

    for ( r = 0; r < *room; r++ ) {
        printf( "\n--- Room %d ---\n", r + 1 );
        
        for ( s = 0; s < 10; s++ ) {
            printf( "Student #%d\n", s + 1 );
            
            printf( " > Name: " );
            scanf( "%s", child[ r ][ s ].name );
            
            printf( " > Age : " );
            scanf( "%d", &child[ r ][ s ].age );
            
            printf( " > GPA : " );
            scanf( "%f", &child[ r ][ s ].gpa );
            
        }
    }
}
