#include <stdio.h>
/***/
void sum_print(void);
int main(void)
{
	sum_print();

}

void sum_print(void)
{
	int x;
	int sum = 0;

	for ( x = 0; x < 1024; i++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%i\n", sum);
}
