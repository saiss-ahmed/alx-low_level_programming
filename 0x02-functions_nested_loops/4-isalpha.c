#include "main.h"
/**
 *
 *
 * */

int _isalpha(int c)
{
	if((c >='a' &&c <= 'z')||(c >= 97 &&c <= 122 )||(c >= 'A' &&c <= 'Z')||(c >= 65 &&c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}


}
