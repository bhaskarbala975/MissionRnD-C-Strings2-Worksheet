/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int len = 0, i = 0, j = 0, k, v, count = 0;
	char key;
	char buf[10];
	len = strlen(word);
	key = word[0];
	if (str == NULL || word == NULL)
		return 0;
	else
	{
	label:	for (; str[i] != '\0'; i++)
	{
		if (str[i] == key)
			break;
	}
			k = 0;
			for (j = i; j<i + len; j++)
			{
				buf[k] = str[j];
				k++;
			}
			buf[k] = '\0';
			
	}
	i = j;
	
	v = strcmp(buf, word);
	if (v == 0)
		count++;
	if (str[j] != '\0')
		goto label;
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

