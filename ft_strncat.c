/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:04:06 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/06/18 19:04:17 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strcat(char *dest, const char *src, size_t n)
{
        int     i;
        int     j;

        i = 0;
        while (dest[i])
                i++;
        j = 0;
        while (src[j] && j < n)
        {
                dest[i + j] = src [j];
                j++;
        }
        dest[i + j] = '\0';
        return (dest);
}

