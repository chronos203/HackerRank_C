#include <stdio.h>

int main()
{
    char ch;
    char s[20];
    char sen[200];

    scanf("%c", &ch);
    fflush(stdin);

    scanf("%s", s);
    fflush(stdin);
    
    scanf("%s", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}