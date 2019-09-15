/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:17:10 by sapril            #+#    #+#             */
/*   Updated: 2019/08/03 22:06:27 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb > 1)
	{
		while (nb > 1)
		{
			sum *= nb;
			nb -= 1;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
	return (0);
}
