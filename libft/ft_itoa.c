/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:43:26 by naadam            #+#    #+#             */
/*   Updated: 2023/01/31 14:46:15 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	size_t		len;
	char		*str;

	nbr = n;
	len = ft_nlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	while (1)
	{
		str[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
		if (!nbr)
			break ;
	}
	return (str);
}

/*int main()
{
	printf("%s", ft_itoa(-42));
}
We use infinite loop here as we do not really know conditions 
to put but put a break statement 
within so the program dosen't crash */
