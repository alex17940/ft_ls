/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <aleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:12:40 by aleveque          #+#    #+#             */
/*   Updated: 2017/06/14 18:46:31 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <dirent.h>
# include <sys/types.h>
# include <stdlib.h>
# include <stdio.h>
# include "get_next_line.h"

typedef struct		s_dir
{
	int				err;
	char			*name;
	DIR				*rep;
	struct dirent	*dir;
	struct s_dir	*in;
	struct s_dir	*next;
}					t_dir;

void				ft_freetab(char	**tab);
int					ft_nbrlen(int nbr);
int					ft_strlen_c(char *str, char c);
void				ft_freeall(int nbr, char *s1, char *s2);
void				ft_lstaddend(t_dir **list, t_dir *neww);
int					ft_absolu(int nbr);
t_dir				*ft_lstmap(t_dir *lst, t_dir *(*f)(t_dir *elem));
void				ft_lstiter(t_dir *lst, void (*f)(t_dir *elem));
void				ft_lstdel(t_dir **alst);
void				ft_lstdelone(t_dir **alst);
void				ft_lstadd(t_dir **alst, t_dir *neew);
t_dir				*ft_lstnew(char *name);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				*ft_memalloc(size_t size);
char				*ft_strnew(size_t size);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
int					ft_strncmp(char *s1, char *s2, size_t nbr);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_atoi(char *str);
char				*ft_strdup(char *src);
char				*ft_strcpy(char *dst, char *src);
char				*ft_strncpy(char *dst, char *src, size_t len);
char				*ft_strcat(char *s1, char *s2);
char				*ft_strncat(char *s1, char *s2, size_t n);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
char				**ft_strsplit(char const *s, char c);
size_t				ft_strlcat(char *dst, char *src, size_t n);
char				*ft_strchr(char *s, int n);
char				*ft_strrchr(char *s, int c);
char				*ft_strstr(char *big, char *little);
char				*ft_strnstr(char *big, char *little, size_t len);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				ft_putnbr_fd(int nbr, int fd);

#endif
