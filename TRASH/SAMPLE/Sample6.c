#include <stdio.h>

// Function to calculate average
float averageOfArray(int *arr, int *n) {
    int sum = 0;
    for(int i = 0; i < *n; i++) {
        sum += *(arr + i);
    }
    return (float)sum / (*n);
}

// Function to count occurrences of an element
int countOccurrences(int *arr, int *n, int *element) {
    int count = 0;
    for(int i = 0; i < *n; i++) {
        if(*(arr + i) == *element) {
            count++;
        }
    }
    return count;
}

// Function to shift even numbers to front
void shiftEvenToFront(int *arr, int *n) {
    int temp[*n];
    int idx = 0;

    // Add even numbers first
    for(int i = 0; i < *n; i++) {
        if(*(arr + i) % 2 == 0) {
            temp[idx++] = *(arr + i);
        }
    }

    // Add odd numbers
    for(int i = 0; i < *n; i++) {
        if(*(arr + i) % 2 != 0) {
            temp[idx++] = *(arr + i);
        }
    }

    // Copy back to original array
    for(int i = 0; i < *n; i++) {
        *(arr + i) = temp[i];
    }
}
