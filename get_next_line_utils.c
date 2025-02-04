#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (s);
}

char	*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;

	if (!s2)
		return (free(s1), NULL);
	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if (!s1)
			return (free(s2), NULL);
		s1[0] = '\0';
	}
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (free(s1), free(s2), NULL);
	ft_strcpy(joined, s1);
	ft_strcpy(joined + ft_strlen(s1), s2);
	free(s1);
	return (joined);
}

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*p;
	int		i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(&s[start]))
		p = malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
	else
		p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if ((int)start >= ft_strlen(s))
		start = ft_strlen(s);
	i = 0;
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
