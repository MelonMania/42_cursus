/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <wolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:45:27 by wolee             #+#    #+#             */
/*   Updated: 2021/11/12 14:56:54 by wolee            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count);
}

static	int	ft_word_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c || s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	*ft_free(char **result, int word_count)
{
	int	i;

	i = 0;
	while (i < word_count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

static char	**ft_get_result(char **result, char *s, char c, int word_count)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		len = ft_word_len(s, c);
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!result[i])
			return (ft_free(result, i));
		j = 0;
		while (j < len)
			result[i][j++] = *s++;
		result[i][j] = 0;
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (0);
	word_count = ft_wordcount(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (0);
	ft_get_result(result, s, c, word_count);
	return (result);
}
