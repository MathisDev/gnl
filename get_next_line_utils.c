#include "get_next_line.h"

char	*ft_strchr(char const *s, int c)
{
	while (*s && *s != (unsigned char)c)
		++s;
	if (*s == (unsigned char)c)
		return ((char *)(unsigned long)s);
	else
		return (0);
}

size_t	ft_strlen(char const *str)
{
	char const	*ptr;

	ptr = str;
	while (*ptr)
		++ptr;
	return ((size_t)(ptr - str));
}

char	*ft_strdup(char const *str)
{
	char	*dup;
	char	*ptr;

	dup = malloc (sizeof (*dup) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (dup);
}

char	*ft_strjoin_free_s1(char *s1, char const *s2)
{
	char	*s3;
	char	*p3;
	char	*p1;

	s3 = malloc (sizeof (*s3) * (ft_strlen (s1) + ft_strlen (s2) + 1));
	if (!s3)
	{
		free (s1);
		return (NULL);
	}
	p3 = s3;
	p1 = s1;
	while (*p1)
		*p3++ = *p1++;
	while (*s2)
		*p3++ = *s2++;
	*p3 = 0;
	free (s1);
	return (s3);
}

char	*ft_substr(const char *str, unsigned int start, size_t size)
{
	size_t	len;
	char	*sub;

	len = ft_strlen (str);
	if (start >= len)
		return (ft_strdup(""));
	if (len - start < size)
		size = len - start;
	sub = malloc (sizeof (*sub) * (size + 1));
	if (!sub)
		return (NULL);
	sub[size] = 0;
	while (size--)
		sub[size] = str[start + size];
	return (sub);
}
