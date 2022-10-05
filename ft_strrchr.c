#include <unistd.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	char	mem[] = "bacdeagh";
	char	empty[] = "";
	char	*test;

	test = ft_strrchr (&mem[2], 'a');
	if (test != &mem[5])
		return (1);
	test = ft_strrchr (mem, 'f');
	if (test != NULL)
		return (2);
	test = ft_strrchr (mem, 'a');
	if (test != &mem[5])
		return (3);
	test = ft_strrchr (empty, 'a');
	if (test != NULL)
		return (4);
	test = ft_strrchr (NULL, 'a');
	if (test != NULL)
		return (5);
	test = ft_strrchr (mem, '\0');
	if (test != &mem[8])
		return (6);
	test = ft_strrchr (empty, '\0');
	if (test != empty)
		return (7);
	printf ("ft_strrchr OK\n");
	return (0);
}
