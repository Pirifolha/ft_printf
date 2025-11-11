/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:25:16 by misousa           #+#    #+#             */
/*   Updated: 2025/11/10 17:54:57 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n1;

	n1 = (t_list *)malloc(sizeof(t_list));
	if (n1 == NULL)
	{
		return (NULL);
	}

	n1->content = content;
	n1->next = NULL;
	return (n1);
}