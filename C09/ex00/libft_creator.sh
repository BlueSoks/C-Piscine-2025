#!/bin/sh
# Compile all .c files into .o objext files
gcc -Wall -Wextra -Werror -c *c
# Archive them in a library called libft.a
ar rc libft.a *.o
# Index the library for faster linking
ranlib libft.a
