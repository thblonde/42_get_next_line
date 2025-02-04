#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char    *get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, int len);

#endif