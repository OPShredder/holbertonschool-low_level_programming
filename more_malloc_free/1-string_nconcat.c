#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the newly allocated space in memory
 *         containing s1 followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0, index;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;

while (s2[s2_len] != '\0')
s2_len++;

if (n >= s2_len)
n = s2_len;

concatenated = malloc(sizeof(char) * (s1_len + n + 1));

if (concatenated == NULL)
return (NULL);

for (index = 0; index < s1_len; index++)
concatenated[index] = s1[index];

for (index = 0; index < n; index++)
concatenated[s1_len + index] = s2[index];

concatenated[s1_len + n] = '\0';

return (concatenated);
}
