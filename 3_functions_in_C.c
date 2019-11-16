#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max1, max2, max;

    max1 = (a > b) ? a : b;
    max2 = (c > d) ? c : d;
    max = (max1 > max2) ? max1 : max2;
    return max;
}

int  main()
{
    int a, b, c, d;
    int result;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = max_of_four(a, b, c, d);
    printf("%d", result);

    return 0;
}