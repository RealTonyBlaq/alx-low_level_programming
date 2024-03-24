#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void my_print(int *array, size_t start, size_t finish);
int lin_search(int *array, size_t start, size_t finish, int v);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int bin_search(int *array, size_t start, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int bin_recursive(int *array, size_t start, size_t size, int value);
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *list_search(listint_t *list, size_t a, size_t b, int value);
listint_t *jump(listint_t *list, size_t index);

#endif /* SEARCH_ALGOS */
