#include "main.h"
/**
  *is_space - a function checkes if there is a space or a special character
  *@c: the char
  *Return: either 1 or 0
  */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
  *count_words - a function that count the words in a specific string
  *@str: the string we are trying to count
  *Return: the length
  */
int count_words(char *str)
{
	int i, count = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}
/**
  *word_len - a function that count the length of a specific word
  *@str: the word
  *Return: the length
  */
int word_len(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0' && !is_space(str[i]); i++)
	{
	len++;
	}
	return (len);
}
/**
  *strtow - a function that splits the chars in a string
  *@str: the string
  *Return: a pointer to an array
  **/
char **strtow(char *str)
{
	int i, j, k;
	int words = count_words(str);
	char **word_array = NULL;

	if (str == NULL || words == 0)
	{
		return (NULL);
	}

	word_array = malloc((words + 1) * sizeof(char *));
	if (word_array == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < words; i++)
	{
		while (is_space(str[j]))
		{
			j++;
		}
		word_array[i] = malloc((word_len(&str[j]) + 1) * sizeof(char));
		if (word_array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(word_array[k]);
			}
		free(word_array);
		return (NULL);
		}

		for (k = 0; str[j] != '\0' && !is_space(str[j]); j++, k++)
		{
			word_array[i][k] = str[j];
		}
		word_array[i][k] = '\0';
	}
	word_array[words] = NULL;
return (word_array);
}

