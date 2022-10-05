#include <stdio.h>
int	ft_tolower(int c)
{
	if ( c >= 'A' && c <= 'Z')
		return(c + ('a' - 'A'));
	return(c);
}
int	main()
{
	printf("%c", ft_tolower('F'));
}
