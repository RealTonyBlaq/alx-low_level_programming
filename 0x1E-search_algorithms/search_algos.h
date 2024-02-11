#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void my_print(int *array, size_t start, size_t finish);
int lin_search(int *array, size_t start, size_t finish, int v);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int bin_search(int *array, size_t start, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
