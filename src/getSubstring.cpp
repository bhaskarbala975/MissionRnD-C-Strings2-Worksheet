/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>

char * get_sub_string(char *str, int i, int j)
{
	char *final;
	int k = 0;
	final = (char *)malloc(sizeof(char)*100);
	int n = 0, i1, t;
	if (i > j || i < 0 || j < 0)
		return NULL;
	if (str == NULL || str == "")
    return NULL;
	else
	{
		for (i1 = i; i1 <= j; i1++)
		{
			final[k] = str[i1];
			k++;
		}
		return final;
	}
	
}
