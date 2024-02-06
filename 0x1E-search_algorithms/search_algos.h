#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
/** C libraries **/
#include <stdio.h>
#include <math.h>
/** Prototypes **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int s);
#endif
