/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 07:42:39 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/07/10 07:45:39 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 65535

typedef	struct 	s_listgnl
{
	char			*text;
	char 			*lnew;
	struct s_listgn	*next;
	int				fd;
}					t_listgnl;

int 				get_next_line(int const fd, char **line);
#endif
