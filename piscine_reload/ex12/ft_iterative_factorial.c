/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:05:13 by sapril            #+#    #+#             */
/*   Updated: 2019/09/02 23:06:00 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int sum;

	i = 1;
	sum = 1;
	if (nb > 12 || nb < 0)
		return (0);
	else
		while (i < nb)
			sum += sum * i++;
	return (sum);
}
