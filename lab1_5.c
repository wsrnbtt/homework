#include <stdio.h>

void GetMatrix(int value[], int *row, int *col);

int main()
{
    int data[50]; 
    int row_count, col_count; 

    GetMatrix(data, &row_count, &col_count);

    if (row_count > 0 && col_count > 0 && row_count * col_count <= 50) 
    {
        printf("\nMatrix\n");
        for (int i = 0; i < row_count; i++)
        {
            for (int j = 0; j < col_count; j++)
            {
                printf("%4d", data[i * col_count + j]);
            }
            printf("\n");
        }
    }
    else if (row_count <= 0 || col_count <= 0)
    {
        printf("\n invalid row/col count\n");
    } 
    else 
    {
        printf("\n invalid: Matrix size too large (> 50)\n");
    }

    return 0;
}

void GetMatrix(int value[], int *row, int *col)
{
    int r, c; 
    const int MAX_SIZE = 50; 

    printf("input rows (max %d): ", MAX_SIZE); 
    if (scanf("%d", &r) != 1 || r <= 0 || r * 1 > MAX_SIZE)
    {
        printf("! invalid row value \n"); 
        *row = 0;
        *col = 0;
        return;
    }
    
    printf("input cols (max %d): ", MAX_SIZE / r); 
    if (scanf("%d", &c) != 1 || c <= 0 || r * c > MAX_SIZE)
    {
        printf("! invalid col value or size too large \n");
        *row = 0;
        *col = 0;
        return;
    }

    *row = r;
    *col = c;

    printf("Enter elements (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int index = i * c + j;

            printf("Element [%d][%d]: ", i, j); 
            
            if (scanf("%d", &value[index]) != 1)
            {
                printf("! invalid element input at [%d][%d]\n", i, j);
                *row = 0;
                *col = 0;
                return; 
            }
        }
    }
}
