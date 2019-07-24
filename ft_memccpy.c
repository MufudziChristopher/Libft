/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:01:57 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/07/24 20:39:00 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*sr;
	size_t	cur;

	if (dest == src || n == 0)
		return (dest);
	cur = 0;
	des = (char *)dest;
	sr = (char *)src;
	while (--n)
		*des++ = *sr++;
	*des = *sr;
	return (dest);
}
