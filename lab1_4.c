    #include <stdio.h>

    int GetSet( int data[] );  //prototype

    int main()
    {
        int data[20];
        int num_count;

        num_count = GetSet(data);

        printf("value (%d ): ", num_count);
        if (num_count >0)
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
        int N; 
        printf("input value (max20): ");

        
        if (scanf("%d", &N) != 1 || N <= 0 || N >20) {
            printf("! invalid value \n");
            return 0; 
        }

        printf("%d :\n",N);
        
        for (int i = 0; i < N; i++)
        {

            if (scanf("%d", &data[i]) != 1)
            {
                
                printf("! invalid %d \n", i);
                break;
            }
        }

        return N; 
    }
