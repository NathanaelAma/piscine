/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nama <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:43:51 by nama              #+#    #+#             */
/*   Updated: 2020/01/28 14:13:40 by nama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	int j;
	
	i = 0;
	if((ac - 1) == 1)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] - 64;
				while(j > 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
				i++;
			}
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 96;
				while(j > 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
