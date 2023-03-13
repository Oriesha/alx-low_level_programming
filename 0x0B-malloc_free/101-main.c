#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */

void print_tab(char **tab)
{
        int i;

        for (i = 0; tab[i] != NULL; ++i)
        {
        printf("%s\n", tab[i]);
        }
}

/**
 * parse_string - Tokenizes a string
 * @str: The string to tokenize
 *
 * Return: A pointer to an array of strings, or NULL if an error occurred
 */

char **parse_string(char *str)
{
        char **tokens;
        char *token;
        int i, count;

        count = 0;
        token = strtok(str, " ");
        while (token != NULL)
        {
                count++;
                token = strtok(NULL, " ");
        }

        tokens = malloc((count + 1) * sizeof(char *));
        if (tokens == NULL)
                return (NULL);

        i = 0;
        token = strtok(str, " ");
        while (token != NULL)
        {
                tokens[i] = token;
                i++;
                token = strtok(NULL, " ");
        }
        tokens[i] = NULL;

        return (tokens);
}
