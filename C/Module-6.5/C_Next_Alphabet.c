#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c == 122)
    {
        printf("%c", 'a');
    }
    else
    {
        printf("%c", c + 1);
    }

    return 0;
}