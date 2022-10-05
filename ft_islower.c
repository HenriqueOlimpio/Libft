int ft_islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_islower('a'));
	printf("%d", ft_islower('Z'));
	printf("%d", ft_islower('z'));
}
