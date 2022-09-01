/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:17:02 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/06 13:31:19 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		ft_putstr(av[i++]);
		ft_putstr("\n");
	}
	return (0);
}
