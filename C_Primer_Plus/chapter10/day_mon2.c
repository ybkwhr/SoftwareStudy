/* day_mon2.c -- let compiler count the element number. */
#include<stdio.h>
int main(int argc, char const *argv[])
{
  const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
  int index;

  for (index = 0; index < sizeof days / sizeof days[0]; index++)
  {
    printf("Months %2d has %d days.\n", index + 1, days[index]);
  }

  return 0;
}
