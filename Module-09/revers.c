#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}