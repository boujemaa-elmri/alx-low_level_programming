#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = rand() % 201 - 100;

    printf("Generated number: %d\n", n);

    int lastDigit = abs(n % 10); // Get the absolute value of the last digit

    printf("Last digit of %d is ", n);

    if (lastDigit > 5) {
        printf("%d and is greater than 5\n", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0\n", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

	return (0);
}
