#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	n;
	
	i = 0;
	s = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * s);
}
#include <stdlib.h>
int main()
{
	printf("My fuction %d\n", ft_atoi(" -12"));
	printf("Original fuction %d\n", atoi(" +-----12"));
}
