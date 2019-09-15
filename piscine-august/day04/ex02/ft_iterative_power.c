/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:55:40 by sapril            #+#    #+#             */
/*   Updated: 2019/08/03 21:56:08 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (nb == 1 || nb == -1)
	{
		if (nb == -1 && power % 2 == 1)
			return (-1);
		return (1);
	}
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		while (power > 1)
		{
			nb *= temp;
			power--;
		}
	}
	return (nb);
}
