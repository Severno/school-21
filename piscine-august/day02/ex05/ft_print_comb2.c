/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:06:14 by sapril            #+#    #+#             */
/*   Updated: 2019/08/01 16:16:32 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int k, int d);
int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

void	ft_print(int k, int d)
{
	ft_putchar(k / 10 + '0');
	ft_putchar(k % 10 + '0');
	ft_putchar(' ');
	ft_putchar(d / 10 + '0');
	ft_putchar(d % 10 + '0');
}
