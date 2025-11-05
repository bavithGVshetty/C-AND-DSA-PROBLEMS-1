#include <stdio.h>
#include <stdlib.h>

void transpose_in_place(int* matrix, int* m, int* n) {
    for (int i = 0; i < *m; i++) {
        for (int j = i + 1; j < *n; j++) {
            int temp = *(matrix + i * (*n) + j);
            *(matrix + i * (*n) + j) = *(matrix + j * (*n) + i);
            *(matrix + j * (*n) + i) = temp;
        }
    }
}

void print_matrix(int* matrix, int* m, int* n) {
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            printf("%d ", *(matrix + i * (*n) + j));
        }
        printf("\n");
    }
}

void print_diagonal_sums(int* matrix, int* m) {
    int primary = 0, secondary = 0;
    for (int i = 0; i < *m; i++) {
        primary += *(matrix + i * (*m) + i);               
        secondary += *(matrix + i * (*m) + (*m - 1 - i));  
    }
    printf("Primary Diagonal:%d\n", primary);
    printf("Secondary Diagonal:%d\n", secondary);
}

int main() {
    int m;
    scanf("%d", &m);
    int *matrix = (int*)malloc(m * m * sizeof(int));
    
    for (int i = 0; i < m * m; i++) {
        scanf("%d", matrix + i);
    }

    transpose_in_place(matrix, &m, &m);
    print_matrix(matrix, &m, &m);
    print_diagonal_sums(matrix, &m);

    free(matrix);
    return 0;
}
