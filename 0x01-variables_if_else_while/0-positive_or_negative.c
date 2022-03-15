#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	si le nombre est supérieur à 0 : est positif
	if(n>0)
	{
		printf("is positive\n");
	}
	else if(n==0)si le nombre est égal à 0 : est nul
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	
	return (0);
}