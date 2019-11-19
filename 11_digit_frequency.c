#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;

    int* nums = (int*) calloc(10, sizeof(int));

    char *array = malloc(1024 * sizeof(char));
    scanf("%s", array);

    array = realloc(array, strlen(array) + 1);

    for (int i = 0; array[i]; i++)
    {
        if (array[i] >= '0' && array[i] <= '9')
        {
            (*(nums+(array[i]-'0')))++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(nums + i));
    }
    
    return 0;
}
