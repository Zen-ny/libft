/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:00:09 by naadam            #+#    #+#             */
/*   Updated: 2023/02/01 16:07:53 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		temp = head -> next;
		(*del)(head -> content);
		free(head);
		head = temp;
	}
	*lst = NULL;
	return ;
}

/*void    del(void *content)
{
    free(content);
}*/

/*int     main(void)
{
    t_list *lst;
    int i;

    i = 42;
    lst = (t_list *)malloc(sizeof(t_list));
    lst->content = malloc(sizeof(int));
    *(int *)lst->content = i;
    lst->next = NULL;

    ft_lstclear(&lst, &del);

    return (0);
}*/
