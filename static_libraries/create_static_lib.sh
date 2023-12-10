#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the generated object files
ar rcs liball.a *.o

# Optional: Clean up - remove the object files after creating the library
rm *.o
