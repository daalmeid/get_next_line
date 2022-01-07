/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:42:02 by daalmeid          #+#    #+#             */
/*   Updated: 2021/11/17 14:30:29 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return ;
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			ptr = &s[i];
			return ((char *) ptr);
		}
		i++;
	}
	if (c == '\0')
	{	
		ptr = &s[i];
		return ((char *) ptr);
	}
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;
	size_t	dst_str_size;

	i = 0;
	count = 0;
	while (dst[count] != '\0' && count < dstsize)
		count++;
	dst_str_size = count;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && count < dstsize - 1)
	{
		dst[count] = src[i];
		i++;
		count++;
	}
	if (count < dstsize)
		dst[count] = '\0';
	i = ft_strlen(src);
	return (dst_str_size + i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
/*
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/
