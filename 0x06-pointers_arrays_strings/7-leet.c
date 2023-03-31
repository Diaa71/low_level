#include "holberton.h"
/**
 * leet - the string is converted from vowels to nums 
 * @str: the string to start with 
 *
 * Return: contains the modified string 
 */
char *leet(char *str)
{
  int i, j;
  char c[] = "aAeEoOtTlL";
  char n[] = "4433007711";

  i = 0;
  while (str[i] != '\0')
    {
      j = 0;
      while (c[j] != '\0')
	{
	  if (str[i] == c[j])
	    {
	      str[i] = n[j];
	    }
	  j++;
	}
      i++;
    }
  return (str);
}
