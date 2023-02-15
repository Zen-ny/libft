/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:33:07 by naadam            #+#    #+#             */
/*   Updated: 2023/01/30 14:54:40 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_seperate(const char *haystack, const char *needle, size_t len)
{
	size_t	point;
	size_t	k;
	size_t	i;

	i = 0;
	while (i < len)
	{
		k = 0;
		if (haystack[i] && needle[k] && haystack[i] == needle[k])
		{
			point = i;
			while (needle[k] && point < len)
			{
				if (haystack[point] != needle[k])
					break ;
				point++;
				k++;
			}
			if (needle[k] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	if (!len)
		return (NULL);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	return (ft_seperate(haystack, needle, len));
}

/*int main()
{
	printf("1%s1\n", ft_strnstr(((void *)0), "fake", 3));
	printf("2%s2\n", strnstr(((void *)0), "fake", 3));
}*/