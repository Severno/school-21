/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:28:24 by sapril            #+#    #+#             */
/*   Updated: 2019/08/03 20:28:26 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int is_prime;
	int i;

	i = 1;
	is_prime = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			is_prime++;
		}
		if (is_prime > 2)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
