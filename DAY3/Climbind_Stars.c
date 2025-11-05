#include <stdio.h>

int CountWays(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return CountWays(n - 1) + CountWays(n - 2);
}

int main()
{
    int n = 4;

    int result = CountWays(n);
    printf("The result=%d", result);
}