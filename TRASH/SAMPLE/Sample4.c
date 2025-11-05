#include <stdio.h>
#include <stdlib.h>

void swapArrays(int **a, int **b, int n) {
    // Temporary pointer
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for both arrays
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));

    // Input first array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Swap arrays using pointer to pointer
    swapArrays(&arr1, &arr2, n);

    // Print arrays after swapping
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    // Free memory
    free(arr1);
    free(arr2);

    return 0;
}
