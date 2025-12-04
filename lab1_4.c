#include <stdio.h>

int GetSet(int data[]);

int main()
{
    int data[20]; 
    int num_count; 

    num_count = GetSet(data);

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

int GetSet(int data[])
{
    int X; 
    const int MAX_SIZE = 20; 

    printf("input value (max%d): ", MAX_SIZE); 

    if (scanf("%d", &X) != 1 || X <= 0 || X > MAX_SIZE) {
        return 0;
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

    return X;
}
