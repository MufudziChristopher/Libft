/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:07:46 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/18 19:07:56 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	int	i;
	int	len;
	char	*str;

	len = 0;
	while (s[len])
		len++;
	s = (char *)malloc(sizeof(*s) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
