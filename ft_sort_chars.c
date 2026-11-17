#include "anagrammes.h"

 void ft_sort_chars(char *word)
 {
     size_t len;
     size_t i;
     size_t j;
     int    swapped;
     char tmp;

    len = ft_strlen(word);
    swapped = 1;
    i = 0;
    while (i + 1 < len && swapped)
    {
        swapped = 0;
        j = 0;
        while (j + 1 < len - i)
          {
            if (word[j] > word[j+ 1])
             {
               tmp =word[j];
               word[j] =word[j + 1];
               word[j + 1] = tmp;
               swapped = 1;
             }
             j++;
          }
          i++;
     }
  }

