int ft_isprint(int c)
{
	if( c >= ' ' && c <= '~')
		return(1);
	return(0);
}
// printlabe 177 ?!
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	//My fuction
	printf("my fuction positive case %d\n", ft_isprint('v'));
	printf("my fuction positive case %d\n", ft_isprint('a'));
	printf("my fuction negative case %d\n", ft_isprint(177));
	printf("my fuction positive case %d\n", ft_isprint(39));
	//Original fuction
	printf("Original fuction result positive case %d\n", isprint('v'));
	printf("Original fuction result positive case %d\n", isprint('a'));
	printf("Original fuction result negative case %d\n", isprint(177));
	printf("Original fuction result positive case %d\n", isprint(39));
}

