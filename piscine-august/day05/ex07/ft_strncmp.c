/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:43:12 by sapril            #+#    #+#             */
/*   Updated: 2019/08/06 17:43:13 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				compare;
	unsigned int	i;

	i = 0;
	compare = 0;
	while (s1[i] == s2[i] && *s1 && *s2 && i < n)
		i++;
	if (s1[i] != s2[i] && i < n)
		compare = s1[i] - s2[i];
	return (compare);
}
