#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, shift;
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));
    int *rotated = (int *)malloc(n * sizeof(int));

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &shift);
    shift = shift % n; 

   
    for (int i = 0; i < n; i++) {
        rotated[i] = arr[(i + n - shift) % n];
    }

    
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    int sum = 0, max = rotated[0], min = rotated[0];
    for (int i = 0; i < n; i++) {
        sum += rotated[i];
        if (rotated[i] > max) max = rotated[i];
        if (rotated[i] < min) min = rotated[i];
    }

    printf("Sum of array: %d\n", sum);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

 
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", rotated[i]);
    }

    free(arr);
    free(rotated);

    return 0;
}
