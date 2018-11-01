/*
** EPITECH PROJECT, 2018
** Bistro-matic
** File description:
** 
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/prototype.h"
void error(void)
{
    printf("ERROR84");
}
void fill_info(char **info, char **argv)
{
    int i;

    info[0] = malloc(sizeof(char) * my_strlen(argv[1]));
    info[1] = malloc(sizeof(char) * my_strlen(argv[2]));
    for (i = 0; argv[1][i] != '\0'; i++)
        info[0][i] = argv[1][i];
    for (i = 0; argv[2][i] != '\0'; i++)
        info[1][i] = argv[2][i];
}
void test_info(char **info)
{
    if (my_strlen(info[1]) != 8)
        error();
    if (my_strlen(info[0]) <= 1)
        error();
}
int main(int argc, char **argv)
{
    char **info = malloc(sizeof(char*) * 2);

    fill_info(info, argv);
    test_info(info);
    free(info[0]);
    free(info[1]);
    free(info);
    return 0;
}
