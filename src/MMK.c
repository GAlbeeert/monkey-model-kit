/*
** COALAS PROJECT, 2021
** MAIN
** File description:
** File containing the main MMK's functions
*/

#include "MMK.h"

int main(int argc, char **argv)
{
    int len = strlen(argv[1]);
    char *buff = malloc(sizeof(char) * len + 1);


    if (argc == 1)
        file_opener("Unnamed");
    else if (argc == 2)
        file_opener(argv[1]);
    free(buff);
    return 0;
}
