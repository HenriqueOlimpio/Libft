#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
 //*pointer in name of the fuction
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return((char*)&s[i]); // = const char *
		i++;
	}
	return NULL;
}
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%c",(char)ft_strchr("carro", 'r'));
    printf("%c", (char)strchr("carro", 'r'));
}
