/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:46:45 by naadam            #+#    #+#             */
/*   Updated: 2023/01/31 14:49:58 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t t)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	if (!dst && t == 0)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= t)
		return (srclen + t);
	while ((i < (t - dstlen - 1)) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int main()
{
	char dst[] = "Zenny"; 
	char src[] = "Zen";
	printf("%zu\n", ft_strlcat(dst, src, 7));
	printf("%zu\n", strlcat(dst, src, 7));
}*/
/*if dstlen greater than t we return the length of the 
source + destination length as there is no space to copy in the string
we return the minimum size needed to store the whole string*/