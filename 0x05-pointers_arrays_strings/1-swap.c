#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: pointer to one int.
 *@b:pointer to second int.
 *
 *return: void.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
