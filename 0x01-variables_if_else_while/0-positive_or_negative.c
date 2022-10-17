#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0-no error, non zero value if error
 *
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)

{
printf("%d is postive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
