/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:02:06 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/07/24 20:53:32 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*sr;
	char	*des;
	size_t	i;

	i = -1;
	sr = (char *)src;
	des = (char *)dest;
	if (sr < des)
		while ((int)(--n) >= 0)
			*(des + n) = *(sr + n);
	else
		while (++i < n)
			*(des + i) = *(sr + i);
	return (dest);
}
