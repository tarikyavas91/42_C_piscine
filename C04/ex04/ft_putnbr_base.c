/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:57:26 by misler            #+#    #+#             */
/*   Updated: 2022/08/02 19:47:35 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convrt(int num, char *base, int size)
{
	long	a;

	a = num;
	if (a < 0)
	{
		ft_putchar ('-');
		a *= -1;
	}
	if (a < size)
		ft_putchar(base[a]);
	if (a >= size)
	{
		ft_convrt(a / size, base, size);
		ft_putchar(base[a % size]);
	}
}

int	ft_control(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_control(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		ft_convrt(nbr, base, i);
	}
}

/* #include <stdio.h>
int		main(void)
{
	ft_putnbr_base(1, "1");
	printf("\n");
	ft_putnbr_base(5, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
   return (0);
} */
