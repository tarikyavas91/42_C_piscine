/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoc <kgoc@student.42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:06:46 by kgoc              #+#    #+#             */
/*   Updated: 2022/08/08 15:23:21 by kgoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*s1;
	int		i;
	int		slen;

	slen = ft_strlen(str) + 1;
	s1 = (char *)malloc(slen * sizeof(char));
	if (!s1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		s1[i] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	arr[i].size = 0;
	return (arr);
}
/*int main()
{
  int ac = 3;
  char *av[3];
  int i = 0;
  t_stock_str *arr;
  av[0] = "ali";
  av[1] = "mehmet";
  av[2] = "mahmut";
  arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
  arr = ft_strs_to_tab(ac, av);
  while (i < ac)
  {
    printf("%d--%s--%s\n", arr[i].size, arr[i].str, arr[i].copy);
    i++;
  }
  free(arr);
  return 0;
}*/
