/**
 * @brief A program to practice dynamically allocating 2D arrays
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Print out a 2D array
 * 
 * @param arr Pointer to a 2D array
 * @param M Number of rows in the array
 * @param N Number of columns in the array
 */
void printArray(int** arr, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("======");
        }
        printf("=\n");
        for (int j = 0; j < N; j++) {
            printf("|%4d ", arr[i][j]);
        }
        printf("|\n");
    }
    for (int j = 0; j < N; j++) {
        printf("======");
    }
    printf("=\n\n");
}

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Usage: ./array2d <number of rows> <number of columns>\n");
        return 1;
    }
    int M = atoi(argv[1]);
    int N = atoi(argv[2]);
    // TODO: Fill this in
    // Step 1: Allocate 2D array of size MxN
    // Step 2: Fill 2D array with the numbers i*N + j
    // Step 3: Print array
    // Step 4: De-allocate memory

    return 0;
}