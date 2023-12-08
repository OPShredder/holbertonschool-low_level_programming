#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched
 * @needle: The substring to be found
 * Return: Pointer to the beginning of the located substring, or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *pattern = needle;

while (*pattern && *haystack && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (!*pattern)
return (start);

haystack = start + 1;
}

return (0); /* Returning 0 to indicate not found */
}
