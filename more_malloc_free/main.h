#ifndef MAIN_H
#define MAIN_H

/* Header file with function prototypes */

void *malloc_checked(unsigned int b);

/* Function prototype for string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Function prototype for _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

#include <stdlib.h>  /* Include necessary libraries if needed */

int *array_range(int min, int max); // Function prototype for array_range

/* Add other function prototypes if necessary */
#endif /* MAIN_H */
