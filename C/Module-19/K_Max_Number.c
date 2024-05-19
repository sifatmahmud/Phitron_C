#include <stdio.h>
#include <limits.h>

int fun(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int mx = fun(a, n, i + 1);
    if (a[i] > mx)
    {
        return a[i];
    }
    else
    {
        return mx;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mx = fun(arr, n, 0);
    printf("%d", mx);

    return 0;
}