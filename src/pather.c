/*
** EPITECH PROJECT, 2021
**
** File description:
**
*/

#include "MMK.h"

char *fpather(char *opath, char *user, char *ext)
{
    int i, j;
    int len = strlen(opath) + strlen(user) + strlen(ext);
    char *fpath = malloc(sizeof(char) * len + 1);
    struct stat st = {0};

    if (stat(opath, &st) == -1)
        mkdir(opath, 0700);
    for (i = 0; opath[i] != '\0'; i++)
        fpath[i] = opath[i];
    for (j = 0; user[j] != '\0'; j++, i++)
        fpath[i] = user[j];
    for (j = 0; ext[j] != '\0'; j++, i++)
        fpath[i] = ext[j];
    fpath[i] = '\0';
    return fpath;
}

char *location_finder(char *user)
{
    char *opath = "/home/GBob974/Documents/Gunpla Projects/";
    char *ext = ".txt";
    char *fpath = fpather(opath, user, ext);

    return fpath;
}

int file_opener(char *user)
{
    FILE *fp;
    char *path = location_finder(user);

    fp = fopen(path, "a+");
    free(path);
    fclose(fp);
    return 0;
}
