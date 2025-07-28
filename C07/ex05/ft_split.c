/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:38:46 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/28 23:42:26 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_is_sep(char c,char *sep)
{
    // ","  ".,/" 1 si , dans .,/ sinon 0
    long i;

    i = 0;
    while (sep[i])
    {
        if (c == sep[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z') && ((c >= 33) && (c <= 126)))
        return (1);
    return (0);
}

int ft_count_words(char *str, char *sep)
{
    // "salut comment sa vas"
    long i;
    long words;
    int bool;

    i = 0;
    words = 0;
    bool = 1;
    while (str[i])
    {
        if (bool && !(ft_is_sep(str[i], sep)))
        {
            words++;
            bool = 0;
        }
        if (ft_is_sep(str[i], sep))
            bool = 1;
        i++;
    }
    return (words);
}

char *ft_copy_words(char *str, long  start, long end)
{
    long i;
    long len;
    char *res;

    i = 0;
    len = end - start;
    res = malloc((len + 1) * sizeof(char));
    if (!res)
        return NULL;
    while (start + i < end)
    {
        res[i] = str[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}


char **ft_split(char *str, char *charset)
{
    // "im split or not ?"
    char **res;
    long len;
    long i;
    long j;

    i = 0;
    j = 0;
    len = 0;
    res = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
    if (!res)
        return NULL;
    while (str[i])
    {
        if (!(ft_is_sep(str[i], charset)))
            len++;
        else if ((ft_is_sep(str[i], charset)))
        {
            res[j] = ft_copy_words(str, i, len - 1);
            len = 0;
            j++;
        }
        i++;
    }
    res[(ft_count_words(str , charset) + 1)] = NULL;
    return (res);
}

#include <stdio.h>
int main(void)
{
    char str[] = "im split or not ?";
    char sep[] = " ";
    char **split = ft_split(str, sep);
    long i = 0;

    while (split[i])
    {
        printf("Mot %ld : '%s'\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    return (0);
}
