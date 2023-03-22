#include <stdio.h>
/**
* main - prints the sum of even fibonacci numbers
* less than 4000000.
* Return: Nothing!
*/
int main(void)
{
        int i = 0;
        long j = 1, k, sum = 0;

        while (j < 4000000)
        {
                k = i + j;
                i = j;
                j = k;
                if (j % 2 == 0)
                {
			sum += j;
                }
        }
        printf("%ld\n", sum);
        return (0);
}

