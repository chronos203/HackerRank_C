#include <stdio.h>

int main()
{
    // Write Your Code Here
    int num;
    char *cardinals[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &num);

    if( num >=1 && num <= 9)
    {
        printf("%s", cardinals[num - 1]);
    }
    else
    {
        printf("Greater than 9");
    }
}