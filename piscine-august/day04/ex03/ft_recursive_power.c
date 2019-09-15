/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 17:13:36 by sapril            #+#    #+#             */
/*   Updated: 2019/08/03 22:11:47 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (power > 0)
	{
		return (nb * (ft_recursive_power(temp, power - 1)));
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
