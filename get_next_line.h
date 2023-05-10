#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX

# ifndef BUFFER_SIZE
#  define OPEN_MAX 1024
# endif

char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strjoin_free_s1(char *s1, char const *s2);
char	*ft_substr(char const *str, unsigned int start, size_t size);
char	*get_next_line(int fd);
#endif
