/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:00:11 by naadam            #+#    #+#             */
/*   Updated: 2023/02/15 14:30:33 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*jo;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	jo = (char *)malloc(i + j + 1);
	if (!jo)
		return (NULL);
	ft_memcpy(jo, s1, i);
	ft_memcpy(jo + i, s2, j + 1);
	return (jo);
}

/*int main()
{
    char *s1 = "";
    char *s2 = " World!";

    printf("%s", ft_strjoin(s1, s2));
}*/
