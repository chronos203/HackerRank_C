#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (char *c = s; *c != '\0'; c++)
    {
        if (*c == ' ')
            *c = '\n';
    }
    printf("%s", s);

    return 0;

}