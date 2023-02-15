/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:33:46 by naadam            #+#    #+#             */
/*   Updated: 2023/01/31 14:51:00 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	int	j;

	j = ft_strlen(str);
	while (j >= 0)
	{
		if (str[j] == (unsigned char)s)
			return ((char *)&str[j]);
		j--;
	}
	if ((unsigned char)s == '\0')
		return ((char *)&str[j]);
	return (0);
}
