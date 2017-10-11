// sum_arr1.c -- sums the element of a array.
// use %u or %lu if %zd doesn't work.
#include "stdio.h"
#define SIZE 10
int sum(int * start, int * end);
int main()
{
  int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  long answer;

  answer = sump(marbles, marbles + 10);
  printf("The total number of marbles is %d.\n", answer);
  printf("The size of answer is %u bytes.\n", sizeof answer);
  printf("The size of marbles is %u bytes.\n", sizeof marbles);

  return 0;
}

/* use pointer arithmetic */
int sump(int * start, int * end)
{
  int total = 0;

  while(start < end)
  {
    total += *start;        // add value to total
    start++;                // advance pointer to the next element
  }
  return total;
}
