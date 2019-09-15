/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:16:21 by sapril            #+#    #+#             */
/*   Updated: 2019/08/08 18:16:22 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print(int hour);

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 12)
	{
		if (hour == 9)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" 0%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		}
		else if (hour < 10)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" 0%d.00 A.M. AND 0%d.00 A.M.\n", hour, hour + 1);
		}
		else if (hour == 11)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" %d.00 A.M. AND %d.00 P.M.\n", hour, hour + 1);
		}
		else if (hour == 12)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" %d.00 P.M. AND 0%d.00 P.M.\n", hour, hour - 11);
		}

	} 
	print(hour);
}

void print(int hour)
{
	if (hour >= 13 && hour <= 21)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" 0%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	}
	else if (hour >= 22 && hour <= 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	}
	else if (hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %d.00 P.M. AND 0%d.00 A.M.\n", hour - 12, hour - 24);
	}
}


int main(int argc, char const *argv[])
{
	ft_takes_place(0);
	ft_takes_place(1);
	ft_takes_place(2);
	ft_takes_place(3);
	ft_takes_place(4);
	ft_takes_place(5);
	ft_takes_place(6);
	ft_takes_place(7);
	ft_takes_place(8);
	ft_takes_place(9);
	ft_takes_place(10);
	ft_takes_place(11);
	ft_takes_place(12);
	ft_takes_place(13);
	ft_takes_place(14);
	ft_takes_place(15);
	ft_takes_place(16);
	ft_takes_place(17);
	ft_takes_place(18);
	ft_takes_place(19);
	ft_takes_place(20);
	ft_takes_place(21);
	ft_takes_place(22);
	ft_takes_place(23);
	ft_takes_place(24);
	return 0;
}
