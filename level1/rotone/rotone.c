#include<unistd.h>
char *rotone(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >=  'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 'A' + 1) % 26 ) + 'A';
		else if( str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 'a' + 1) % 26) + 'a';
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (str);
}

int main(int c, char **v)
{
	if(c == 2)
		rotone(v[1]);
	return(0);
}