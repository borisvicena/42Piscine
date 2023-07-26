/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:29:45 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/26 14:44:12 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*copy_word(char *str, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**words_alloc(char **result, char *str, char *charset)
{
	result = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		word_len;
	int		in_word;
	char	**result;
	int		i;

	i = 0;
	in_word = 0;
	result = NULL;
	result = words_alloc(result, str, charset);
	while (*str)
	{
		if (is_separator(*str, charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			word_len = 1;
			while (str[word_len] && !is_separator(str[word_len], charset))
				word_len++;
			result[i++] = copy_word(str, word_len);
		}
		str++;
	}
	result[i] = NULL;
	return (result);
}

/*
int	main(void)
{
	char **res;
	char *string = "Hello, this will be separated";
	res = ft_split(string, ", ");
	printf("Words count: %d\n", count_words(string, ", "));
	int i = 0;
	while (i < count_words(string, ", "))
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/
