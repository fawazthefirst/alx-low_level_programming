#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/*
* main function - Prints The string "Last digit of", followed by
* n, followed by
* the string is, followed by
* if the last digit of n is greater than 5: the string and is greater than 5
* if the last digit of n is 0: the string and is 0
* if the last digit of n is less than 6 and not 0: the string and is less than * 6 and not 0
* followed by a new line
*/
int main(void)
{
int n;
 
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n%10) > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, (n%10));
}
else if ((n%10) == 0)
{
printf("Last digit of %d is %d and is 0", n, (n%10));
}
else if (((n%10) < 6) && ((n%10) != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, (n%10));
}
return (0);
}
