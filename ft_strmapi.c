/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:00:25 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/19 19:08:07 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;
	int				j;

	if (s && f)
	{
		i = -1;
		j = ft_strlen((char *)s);
		fstr = (char *)malloc(j * sizeof(fstr));
		while (s[i++])
		{
			fstr[i] = f(i, s[i]);
		}
		return (fstr);
	}
	return (NULL);
}
