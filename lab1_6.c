#include <stdio.h>

int GetMatrix(int *row, int *col);

int main()
{
    int data, row_count, col_count; 

    data = GetMatrix(&row_count, &col_count); 

    return 0;
}

int GetMatrix(int *row_ptr, int *col_ptr)
{
    int data[20][20];
    int r, c;
    int i, j;

    const int MAX_DIM = 20;

    printf("input rows (max %d): ", MAX_DIM); 
    if (scanf("%d", &r) != 1 || r <= 0 || r > MAX_DIM)
    {
        printf("! invalid row value \n"); 
        *row_ptr = 0;
        *col_ptr = 0;
        return 0;
    }
    
    printf("input cols (max %d): ", MAX_DIM); 
    if (scanf("%d", &c) != 1 || c <= 0 || c > MAX_DIM)
    {
        printf("! invalid col value \n");
        *row_ptr = 0;
        *col_ptr = 0;
        return 0;
    }

    *row_ptr = r;
    *col_ptr = c;

    printf("Enter elements (%d x %d):\n", r, c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Element [%d][%d]: ", i, j); 
            
            if (scanf("%d", &data[i][j]) != 1)
            {
                printf("! invalid element input at [%d][%d]\n", i, j);
                *row_ptr = 0; 
                *col_ptr = 0;
                return 0; 
            }
        }
    }

    printf("\nMatrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d", data[i][j]);
        }
        printf("\n");
    }

    return 1;
}
