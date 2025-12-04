#include <stdio.h>

void GetSet(int data[], int *num);

int main()
{
    int data[20];
    int num;

    GetSet(data, &num);

    printf("value (%d ): ", num);
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
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

void GetSet(int data[], int *num)
{
    int N;

    printf("input value (max20): ");

    if (scanf("%d", &N) != 1 || N <= 0 || N > 20) {
        printf("! invalid value \n");
        *num = 0; 
        return;
    }

    printf("%d :\n", N);

    for (int i = 0; i < N; i++)
    {
        if (scanf("%d", &data[i]) != 1)
        {
            printf("! invalid %d \n", i);
            N = i; 
            break;
        }
    }

    *num = N;
}
