/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:14:16 by naadam            #+#    #+#             */
/*   Updated: 2023/01/29 19:51:02 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)s)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)s == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*int main()
{
  	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	int s = '\0';
	printf("%s\n" ,ft_strchr(src, s));
	printf("%s\n" ,strchr(src, s));
}*/
