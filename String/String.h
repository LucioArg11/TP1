#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define isalpha(x) ((x>='A' && x<='Z')?1:(x>='a' && x<='z')?1:0)
#define isspace(x) ((x==' ' || x=='\t' || x=='\n')?1:0)

int mi_tolower(int ch);
int mi_toupper(int ch);
int esPalindromo(char *s, unsigned cant);
int valorNumerico(char *s);
size_t strlen(const char *s);
char *strpbrk(const char *s1, const char *s2);
void saca_espacios(char *s);

#endif // STRING_H_INCLUDED
