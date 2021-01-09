/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:31:24 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 18:36:44 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;

	i = 0;
	if (chr == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == chr)
			i++;
		str++;
	}
	if (i == 0)
		return (NULL);
	else
	{
		while (*str != chr)
			str--;
		return ((char *)str);
	}
}
