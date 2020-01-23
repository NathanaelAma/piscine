/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nama <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:46:03 by nama              #+#    #+#             */
/*   Updated: 2020/01/23 11:53:34 by nama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int lastp;

	lastp = argc - 1;
	i = 0;
	if ((argc - 1) < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argv[lastp][i])
		{
			write(1, &argv[lastp][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
