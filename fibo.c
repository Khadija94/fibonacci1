/*******************************************
* Program to calculate Fibonacci series
********************************************/

#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

/* Manage memory for the fib_series 
* param: fib_series gets the memory
*/
void fib_mem(int range, unsigned long **fib_series) 
{
  if (*fib_series == NULL) 
  {
    MAX_RANGE = range < MAX_RANGE ? MAX_RANGE : range;
    *fib_series = (unsigned long *) calloc(sizeof(unsigned long), MAX_RANGE);
    **fib_series = FIB_0;  
    *(*fib_series + 1) = FIB_1;
  }
  else if (range > MAX_RANGE)
  {
    MAX_RANGE = range < MAX_RANGE ? MAX_RANGE : range;
    *fib_series = (unsigned long *) realloc(*fib_series, MAX_RANGE);
  }
}

/* Calculate fibonacci series 
param: range accepts the maximum range
param: fib_series places the result in this array
*/
void fib_calc(int range, unsigned long **fib_series)
{
  int i, temp_max;

  fib_mem(range, fib_series);
  //Use the caches value
  if (range < MAX_RANGE)
    return;
  
  printf("\nCalculating...");
  for(i = 2; i < range; i++)
  {
    *(*fib_series + i) = *(*fib_series + i - 1) + *(*fib_series + i - 2);
  }  
}

/* Starting point of program */
int main()
{
  int range, i;
  unsigned long *fib_series = NULL;
  while (TRUE)
  {
    printf("\nEnter the no. range (Press ^C to terminate):");
    scanf("%d",&range);
    if (range < 0)
      printf("\nPlease enter a positive number");
    else {
      fib_calc(range, &fib_series);
      printf("\nThe fibonacci series is :");
      for(i = 0; i < range; i++)
        printf("%lu,", *(fib_series + i));
      }
  }
  return 0;
}