/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:12:21 by sapril            #+#    #+#             */
/*   Updated: 2019/08/09 00:12:22 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if ((base % 2) == 1)
		return (1 + ft_collatz_conjecture((base * 3) + 1));
	else if ((base % 2) == 0)
		return (1 + ft_collatz_conjecture((base / 2)));
	return (0);
}
