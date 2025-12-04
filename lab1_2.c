#include <stdio.h>

void GetSet(int data[], int *num_count);

int main()
{
    int data[20];
    int num_count;

    GetSet(data, &num_count);

    printf("value (%d ): ", num_count);
    if (num_count > 0)
    {
        for (int i = 0; i < num_count; i++)
        {
            printf("%d ", data[i]);
        }
        printf("\n");
    }
    else
    {
        printf("\n invalid\n");
    }

    return 0;
}

void GetSet(int data[], int *num_count)
{
    int X;

    printf("input value (max20): ");

    if (scanf("%d", &X) != 1 || X <= 0 || X > 20) {
        printf("! invalid value \n");
        *num_count = 0; 
        return;
    }

    printf("%d :\n", X);

    for (int i = 0; i < X; i++)
    {
        if (scanf("%d", &data[i]) != 1)
        {
            printf("! invalid %d \n", i);
            X = i; 
            break;
        }
    }

    *num_count = X;
}
