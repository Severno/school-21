/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:30:28 by sapril            #+#    #+#             */
/*   Updated: 2019/08/09 23:27:26 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str)
{
	int word_count;
	int last_space;

	word_count = 0;
	last_space = 1;
	while (*str)
	{
		if (!(*str == ' ' || *str == '\n' || *str == '\t') && last_space)
		{
			word_count++;
			last_space = 0;
		}
		else if (*str == ' ' || *str == '\n' || *str == '\t')
			last_space = 1;
		str++;
	}
	return (word_count);
}

int		next_word_pos(char *str, int pos)
{
	while (str[pos] == ' ' || str[pos] == '\n' || str[pos] == '\t')
		pos++;
	return (pos);
}

int		word_len(char *str, int pos)
{
	int length;

	length = 0;
	while (!(str[pos + length] == ' ' || str[pos + length] == '\n'
	|| str[pos + length] == '\t' || str[pos + length] == '\0'))
		length++;
	return (length);
}

int		set_word(char **res, int n, char *str, int pos)
{
	int length;
	int position;
	int i;

	position = next_word_pos(str, pos);
	length = word_len(str, position);
	res[n] = (char*)malloc(length + 1);
	i = 0;
	while (i < length)
	{
		res[n][i] = str[position + i];
		i++;
	}
	res[n][i] = '\0';
	return (position + length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		position;
	int		i;
	int		words;

	i = 0;
	position = 0;
	words = count_words(str);
	res = (char **)malloc(sizeof(char*) * (words + 1));
	while (i < words)
	{
		position = set_word(res, i, str, position);
		i++;
	}
	res[i] = 0;
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
	printf("%s\n", res[3]);
	printf("%s\n", res[4]);
	return (res);
}

int main(int argc, char const *argv[])
{
	ft_split_whitespaces("     Hel lo World!!!     !$^&*()  _3432    ");
	return 0;
}
