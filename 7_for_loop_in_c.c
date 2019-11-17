#include <stdio.h>

void main()
{
    char *labels[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
           printf("%s\n", labels[i-1]);
        }        
        else if(i%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd");
        }
    }

    printf("\n ======================================== \n");

    /*
    THE SHORT WAY
    */

    int index;
    char *labels2[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};

    for (int i = a; i <= b; i++)
    {
        index = (i <= 9) ? i - 1 : 9 + i % 2;
        
        printf("%s\n", labels2[index] );
    }
    

    
    
    
}