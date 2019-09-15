/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:17:40 by sapril            #+#    #+#             */
/*   Updated: 2019/08/08 23:17:42 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	int		i;
	int		j;
	int		q;

	s = malloc((argc) * sizeof(char));
	i = 1;
	j = 0;
	q = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			s[q++] = argv[i][j++];
		if ((i + 1) < argc)
			s[q] = '\n';
		q++;
		i++;
	}
	s[q - 1] = '\n';
	s[q] = '\0';
	return (s);
}
