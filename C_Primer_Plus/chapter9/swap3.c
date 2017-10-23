/* swap1.c -- first attempt at a awapping function */
#include <stdio.h>
void interchange(int * u, int * v);  /* send addresses to function */

int main(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}

void interchange(int * u, int * v)      // define function
{
	int temp;

	// printf("Originally * u = %d and * v = %d.\n", * u, * v);
	temp = *u;
	*u = *v;
	*v = temp;
//	printf("Now * u = %d and * v = %d.\n", * u, * v);
}
