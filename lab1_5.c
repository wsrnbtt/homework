#include <stdio.h>

void GetMatrix(int value[], int *row, int *col);

int main()
{
    int data[50]; 
    int row_count;
    int col_count; 

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

void GetMatrix(int value[], int *row_ptr, int *col_ptr)
{
    int row_val;
    int col_val; 
    const int MAX_SIZE = 50; 

    printf("input rows (max %d): ", MAX_SIZE); 
    if (scanf("%d", &row_val) != 1 || row_val <= 0 || row_val > MAX_SIZE)
    {
        printf("! invalid row value \n"); 
        *row_ptr = 0;
        *col_ptr = 0;
        return;
    }
    
    printf("input cols (max %d): ", MAX_SIZE / row_val); 
    if (scanf("%d", &col_val) != 1 || col_val <= 0 || row_val * col_val > MAX_SIZE)
    {
        printf("! invalid col value or size too large \n");
        *row_ptr = 0;
        *col_ptr = 0;
        return;
    }

    *row_ptr = row_val;
    *col_ptr = col_val;

    printf("Enter elements (%d x %d):\n", row_val, col_val);
    for (int i = 0; i < row_val; i++)
    {
        for (int j = 0; j < col_val; j++)
        {
            int index = i * col_val + j;

            printf("Element [%d][%d]: ", i, j); 
            
            if (scanf("%d", &value[index]) != 1)
            {
                printf("! invalid element input at [%d][%d]\n", i, j);
                *row_ptr = 0;
                *col_ptr = 0;
                return; 
            }
        }
    }
}
