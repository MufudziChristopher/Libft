/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:57:21 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/18 18:57:32 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t 	i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (size-- > 0)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

