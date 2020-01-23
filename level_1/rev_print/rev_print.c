/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nama <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:32:34 by nama              #+#    #+#             */
/*   Updated: 2020/01/23 16:59:38 by nama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str)
	{
		i++;
	}
	return i;
}

int main(int ac, char **av)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if ((ac - 1) == 1)
	{
		len = ft_strlen(av[1]);
		while (len > 0)
		{
			if (av[1][len] == '\0')
				len--;
			ft_putchar(av[1][len]);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
