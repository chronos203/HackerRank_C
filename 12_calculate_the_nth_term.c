#include <stdio.h>

int find_nth_term(int n, int a, int b, int c)
{
    int nth = a + b + c;

    if(n == 1)
        return a;

    else if(n == 2)
        return b;

    else if (n == 3)
        return c;

    else
    {
        n =  n - 1;
        a = b;
        b = c;
        c = nth;
        return find_nth_term(n, a, b, c);
    }
    
    
}

int main()
{
    int n, a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    int result = find_nth_term(n, a, b, c);
    printf("%d", result);

    return 0;
}