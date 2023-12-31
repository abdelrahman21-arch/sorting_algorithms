#ifndef SORT_H_
#define SORT_H_
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*print_array_module.c*/
void print_array(const int *array, size_t size);
/*print_list_module.c*/
void print_list(const listint_t *list);

/*bubble_sort_module.c*/
void bubble_sort(int *array, size_t size);
/*insertion_sort_module.c*/
void insertion_sort_list(listint_t **list);
/*selection_sort.c*/
void selection_sort(int *array, size_t size);
/*quick.c*/
void quick_sort(int *array, size_t size);




#endif
