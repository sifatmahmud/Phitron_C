#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int tiger = 0;
        int pathaan = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tiger++;
            }
            else
            {
                pathaan++;
            }
        }

        if (tiger > pathaan)
        {
            printf("Tiger\n");
        }
        else if (pathaan > tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}