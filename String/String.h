#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int mi_tolower(int ch);
int mi_toupper(int ch);
int esPalindromo(char *s, unsigned cant);
int valorNumerico(char *s);
size_t strlen(const char *s);
char *strpbrk(const char *s1, const char *s2);

#endif // STRING_H_INCLUDED
