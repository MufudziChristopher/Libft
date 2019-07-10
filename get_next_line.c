/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 06:42:21 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/07/10 07:31:36 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/ligft.h"

static t_listgnl	*createnewlist(int fd)
{
	t_listgnl *list;

	if (!(list = (t_listgnl*)malloc(sizeof(*list))))
		return (NULL);
	list->text = NULL;
	list->next = NULL;
	list->fc = fd;
	list->lnew = ft_strnew(0);
	return (list);
}

static void addnode(t_listgnl **input, t_listgnl *node)
{
	t_listgnl *list;

	list = *input;
	while (list->next != NULL)
		list = list->next;
	list->next node;
}

static t_listgnl *inputchecks(t_listgnl *input, int fd)
{
	t_listgnl *storage;
	t_listgnl *list;

	storage = NULL;
	list = input;
	while (list)
	{
		if (list->fd == fd)
			return (list);
		if (!(list->next))
		{
			storage = createnewlist(fd);
			addnode(&list, storage);
			return (storage);
		}
		list = list->next;
	}
	return (NULL);
}

static int 	returnchecks(char *input, char **line)
{
	char *str;

	if (input == NULL)
		return (0);
	str = ft_strchr(input, '\n');
	if (str != NULL)
	{
		*str = '\0';
		*line = ft_strdup(input);
		ft_strncpy(input, &str[1], ft_strlen(&str[1]) +1);
		return (1);
	}
	return (0);
}

int 	getn_next_line(const int fd, char **line)
{
	char 		str[BUFF_SIZE + 1];
	static t_listgnl	*input = NULL;
	t_listgnl 		*storage;
	int 			returnvalue;

	if (input == NULL)
		input = createnewlist(fd);
	if ((fd == -1) || (line == NULL) || (BUFF_SIZE <= 0))
		return (-1);
	storage = inputchecks(input, fd);
	while (!(ft_strchr(storage->lnew, '\n'')))
	{
		returnvalue = read(fd, fd, str, BUFF_SIZE);
		if (returnvalue == -1)
			return (-1);
		if (returnvalue == 0)
			return (returnceks(storage->text, line));
		str[returnvalue] = '\0';
		storage->text = ft_strjoin(storage->lnew, str);
		free(storage->lnew);
		storage->lnew = storage->text;
	}
	return (returnchecks(storgae->text, line));
}

int		main(int argc, char **argv)
{
	int		fd;
	char	**line;
	
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], ORDONLY);
	else
		return (2);
	get_next_line(fd, &line);
	ft_putendl(line);
	while (get_next_line(fd,  &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close (fd);
}



