/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:36:52 by naadam            #+#    #+#             */
/*   Updated: 2023/01/29 19:49:39 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((char *)dst == NULL && (char *)src == NULL)
		return (NULL);
	while (len > 0 && (char *)src < (char *)dst)
	{
		((char *)dst)[len - 1] = ((char *)src)[len - 1];
		len--;
	}
	if ((char *)src >= (char *)dst)
		ft_memcpy(dst, src, len);
	return (dst);
}

/*int main()
{
	char src[] = "It Off";
	char dst[] = "Set BO LLL";
	printf("%s\n", ft_memmove(dst, src, 4));
	printf("%s\n", memmove(dst, src, 4));
}*/