/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:27:18 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/03 15:09:50 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
