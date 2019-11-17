#include <stdio.h>

void calculate_maximum(int n, int k)
{
    int max_AND = 0;
    int max_OR = 0;
    int max_XOR = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(((i & j) > max_AND) && ((i & j) < k))
                max_AND = i & j;

            if(((i | j) > max_OR) && ((i | j) < k))
                max_OR = i | j;

            if(((i ^ j) > max_XOR) && ((i ^ j) < k))
                max_XOR = i ^ j;            
        }
    }

    printf("%d\n%d\n%d", max_AND, max_OR, max_XOR);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_maximum(n, k);

    return 0;
}