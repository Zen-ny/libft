/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:02:41 by naadam            #+#    #+#             */
/*   Updated: 2023/01/31 14:52:29 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	substring = (char *)malloc(len + 1 * sizeof(char));
	if (!substring)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i == start)
			ft_memcpy(substring, &s[start], len);
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

/*int main()
{
	char    *original = "sixty";
	printf ("%s", ft_substr(original, 3, 2));
}*/
/*The second if statement checks whether the length of the string being 
returned is greater than the original string*/
/*minus the starting index an ensures
 that it does not go beyond the original string
The third statement handles the memory leak*/
