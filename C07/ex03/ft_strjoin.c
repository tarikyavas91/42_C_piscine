/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:00:51 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/08 19:35:14 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	max_len(char **strs, int size)
{
	int	i;
	int	j;
	int	full_len;

	i = 0;
	full_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			full_len++;
		}
		i++;
	}
	return (full_len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2, int *x)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[*x] = s2[i];
		i++;
		*x += 1;
	}
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		max_leng;
	int		length_sep;
	int		j;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	max_leng = max_len(strs, size);
	length_sep = ft_strlen(sep);
	max_leng = (length_sep * (size - 1)) + max_leng;
	str = (char *)malloc((max_leng + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		str = ft_strcpy(str, strs[i], &j);
		if (i != (size - 1))
			str = ft_strcpy(str, sep, &j);
		i++;
	}
	str[j] = '\0';
	return (str);
}
/* #include <stdio.h>
int	main(void)
{
	int index;
	char **strs;
	char *separator;
	char *result;
	int size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Ahmet";
	strs[1] = "String1";
	strs[2] = "Strings_3";
	separator = "--";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
} */