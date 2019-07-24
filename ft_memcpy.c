/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:52:54 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/07/24 20:50:21 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*sr;

	i = 0;
	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
