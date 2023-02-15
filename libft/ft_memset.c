/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:19:32 by naadam            #+#    #+#             */
/*   Updated: 2023/01/29 19:49:49 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = (unsigned char) c;
		i++;
	}
	return ((void *)str);
}

/*int main()
{
		char x[4] = "Zen";
	printf("%s", ft_memset(x, 't', 3));
}*/