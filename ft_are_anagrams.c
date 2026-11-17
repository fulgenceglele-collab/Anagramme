#include "anagrammes.h"


int ft_are_anagrams(const char *mot1, const char *mot2)
{
    char   copie1[MAX_WORD_LEN];
    char   copie2[MAX_WORD_LEN];
    size_t len1;
    size_t len2;
    size_t i;


    len1 = ft_strlen(mot1);
    len2 = ft_strlen(mot2);

    if (len1 != len2)
        return (0);


    if (len1 >= MAX_WORD_LEN)
        return(0);

    i=0;
    while (i < len1)
           {
           copie1[i]=mot1[i];
           copie2[i]=mot2[i];
           i++;
           }

    copie1[i]= '\0';
    copie2[i]= '\0';

    ft_sort_chars(copie1);
    ft_sort_chars(copie2);

    if (ft_strcmp(copie1, copie2)==0)
        return (1);
    return(0);


}
