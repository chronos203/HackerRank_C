#include <stdio.h>

int main()
{
    int number, rem;
    int sum = 0;

    scanf("%d", &number);

    // for (int i = 0; i < number; i++)
    // {
    //     rem = number%10;
    //     sum = sum + rem;
    //     number = number/10;
    // }

    while (number > 0)
    {
        sum = sum + (number%10);
        number = number/10;
    }
    
    printf("%d", sum);
}