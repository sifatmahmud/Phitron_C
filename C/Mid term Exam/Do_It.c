#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if (n, k >= 1 && n, k <= 100)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 1; i <= k; i++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }

    return 0;
}