#include <stdio.h>

void main()
{
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d" "\n%.1f %.1f\n", a+b, a-b, c+d, c-d);

}