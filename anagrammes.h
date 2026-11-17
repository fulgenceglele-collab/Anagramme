#ifndef ANAGRAMMES_H
#define ANAGRAMMES_H

#include <stddef.h>
#define MAX_WORD_LEN 32

 size_t ft_strlen(const char *s);
 int ft_strcmp(const char*s1, const char *s2);
 char ft_tolower(char c);
 void ft_sort_chars(char word[MAX_WORD_LEN ]);
 int ft_are_anagrams(const char *mot1, const char *mot2);

#endif

