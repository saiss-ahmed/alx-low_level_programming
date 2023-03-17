#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
		int n1 = 48;

		do {
			int n2 = 48;

			do {
				int n3 = 48;

				do {
					int n4 = 49;

					do {
					if (n3 >= n1 && n4 > n2)
						{
						putchar(n1);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);
						if(n1 == 57 && n2 == 56 && n3 == 57 && n3 == 57 )
						{
						} else {
						putchar(',');
						putchar(' ');
						}
						}
					n4++;
					} while (n4 < 58);
				n3++;
				} while (n3 < 58);
			n2++;
			} while (n2 < 57);
		n1++;
		} while (n1 < 58);
	putchar('\n');
	return (0);
}
