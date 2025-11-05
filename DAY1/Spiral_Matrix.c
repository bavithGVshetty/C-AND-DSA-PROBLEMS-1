// Boilerplate codes
#include <stdio.h>

void spiralOrder(int m, int n, int matrix[m][n])
{
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    // First row 1 2 3 4
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;
        // Right column
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

    int main()
    {
        int m, n;
        printf("Enter the size m and n\n");
        scanf("%d %d", &m, &n);
        int matrix[m][n];
        printf("Enter the matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        spiralOrder(m, n, matrix);
        return 0;
    }