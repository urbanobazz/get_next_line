/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane < ubazzane@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:17:26 by ubazzane          #+#    #+#             */
/*   Updated: 2023/11/24 18:22:10 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* found with comman "ulimit -n or -a" */
# ifndef MAX_FD
#  define MAX_FD 1024
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);

#endif
