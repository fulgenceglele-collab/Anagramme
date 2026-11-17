#include <unistd.h>
#include <stdlib.h>
#include "anagrammes.h"

static void ft_putnbr(int n)
{
    char c;

    if (n >= 10)
        ft_putnbr(n/ 10);
    c = '0' + n % 10;
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int *used;
    int groupe;
    int i;
    int j;

    if (argc < 3)
    {
        write(1, "Erreur: pas assez d'arguments\n", 30);
        return 1;
    }


    used = malloc(sizeof(int) * argc);
    if (!used)
        return 1;

    i = 0;
    while (i < argc)
    {
        used [i] = 0;
        i++;
    }
    groupe = 0;
    i = 1;
    while(i < argc)
    {
        if ( used[i] == 0)
        {
            groupe++;
            if ( groupe > 1)
                write(1, "\n", 1);
            write(1, "Groupe ", 7);
            ft_putnbr(groupe);
            write(1, " : ", 3);
            write(1, argv[i], ft_strlen(argv[i]));
            used[i] = 1;

            j = i + 1;
            while (j < argc)
            {
                if (used[j] == 0 && ft_are_anagrams(argv[i], argv[j]) == 1)
                {
                    write(1, " ", 1);
                    write(1, argv[j], ft_strlen(argv[j]));
                    used[j] = 1;
                }
                j++;
            }
        }
        i++;

     }
     write(1, "\n", 1);
     free(used);
     return 0;
}




