/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulku < eulku@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:58:55 by eulku             #+#    #+#             */
/*   Updated: 2024/10/26 21:58:55 by eulku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_length(const char *str, char delim)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != delim)
		len++;
	return (len);
}

static size_t	count_words(const char *str, char delim)
{
	int	in_word;
	size_t	count;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delim && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delim)
			in_word = 0;		
		str++;
	}
	return (count);
}

static char **split_into(char **result, char delim, const char *str)
{
    size_t i;
    size_t j;
    size_t word_len;
    i = 0;
    while (*str)
    {
        if (*str != delim)
        {
            word_len = get_word_length(str, delim);
            result[i] = (char *)malloc((word_len + 1) * sizeof(char));
            if (!result[i])
            {
                while (i > 0)
                    free(result[--i]);
                free(result);
                return (NULL);
            }
            j = 0;
            while (j < word_len)
                result[i][j++] = *str++;
            result[i][j] = '\0';
            i++;
        }
        else
            str++;
    }
    result[i] = NULL;
    return (result);
}

char **ft_split(const char *str, char delim)
{
    size_t word_count;
    char **result;

    word_count = count_words(str, delim);
    result = (char **)malloc((word_count + 1) * sizeof(char *));

    if (!result)
        return (NULL);

    if (!split_into(result, delim, str))
    {
        free(result);
        return (NULL);
    }

    return (result);
}
/*int i = 0;
    char **words = ft_split("Hello , World , Example", ' ');
    while (words[i] != NULL)
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }*/
