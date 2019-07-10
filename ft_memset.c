/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:27:18 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/19 18:54:43 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*current;

	if (n == 0)
		return (str);
	current = (unsigned char *)str;
	while (n--)
	{
		*current = (unsigned char)c;
		if (n)
			current++;
	}
	return (str);
}
