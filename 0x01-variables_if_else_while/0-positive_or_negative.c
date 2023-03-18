#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * main - check neg or pos program
 * return: return 0
 */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n == 0)
    printf("%d is zero\n", n);
  else if (n < 0)
    printf("%d is negative\n", n);
  else
    printf("%d is positive\n", n);
  return (0);
}