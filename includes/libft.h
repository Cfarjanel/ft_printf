/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:13:18 by cfarjane          #+#    #+#             */
/*   Updated: 2018/08/23 18:20:58 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isdigit(int c);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar(char c);
int					ft_putnchar(char c, int len);
int					ft_putnbr(long long int n);
int					ft_putstr(char const *s);
void				ft_putendl_fd (char const *s, int fd);
size_t				ft_strlen(const char *s);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(unsigned long long n);
char				*ft_itoa_base(long long value, int base);
int					ft_exit(char *str, int fd);
void				ft_putchar_fd(char c, int fd);
char				*ft_strccpy(char *str, char c);
char				*ft_strtolower(char *str);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_putnstr(char *s, int n);
char				*ft_strchr(const char *s, int c);
int					ft_putwchar(wchar_t wc);
int					ft_putwstr(wchar_t *wstr);
int					ft_wcharlen(wchar_t wchar);
int					ft_wstrlen(wchar_t *wstr);

#endif
