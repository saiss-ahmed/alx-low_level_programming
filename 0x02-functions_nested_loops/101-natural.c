#include <stdio.h>
/***/
void sum_print(void);
int main(void)
{
	sum_print();

}

void sum_print(void)
{
	int x = 1024;
	int sum = 0;

	for (int i = 0; i < x ; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
		if (i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
}
