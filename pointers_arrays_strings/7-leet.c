#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
char *leet_dict = "aAeEoOtTlL";
char *leet_encode = "4433007711";

int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_dict[j] != '\0'; j++)
{
if (str[i] == leet_dict[j])
{
str[i] = leet_encode[j];
break; /* Break the inner loop once a match is found */
}
}
}

return (str);
}
