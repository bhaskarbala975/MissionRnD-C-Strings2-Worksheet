/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#define size 100
char final[size];
char * get_last_word(char * str)
{
	int n = 0, k = 0, i = 0, j = 0;
	if (str == NULL || str == "")
		return NULL;
	else
	{
		while (str[n] != '\0')
			n++;
		for (i = n; i >= 0; i--)
		{
			if (str[i] == ' ')
				break;
		}
		for (j = i + 1; str[j] != '\0'; j++)
		{
			final[k] = str[j];
			k++;
		}
		final[k] = '\0';
		return final;
	}
}