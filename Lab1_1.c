#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num <= 0)
    {
        printf("error\n");
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {
        printf("Hello World\n");
    }

    return 0;
}
