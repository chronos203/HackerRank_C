#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, sum = 0;
    
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    for (int index = 0; index < size; index++)
    {
        scanf("%d", (arr + index));
        sum = sum + arr[index];
    }

    printf("%d", sum);   

}