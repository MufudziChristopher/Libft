/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:59:57 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/18 19:00:13 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned in, char *))
{
	unsigned int 	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s + i);
	}
}

