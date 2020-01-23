/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nama <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:33:09 by nama              #+#    #+#             */
/*   Updated: 2020/01/23 17:50:34 by nama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if((argc - 1) == 1)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 1 && argv[1][i] <= 64)
			{
				i++;
			}
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 32;
				ft_putchar(argv[1][i]);
			}
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
