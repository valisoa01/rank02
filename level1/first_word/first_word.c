#include<unistd.h>
void first_word(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' && str[i] == '\t')
		i++;
	while(str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main (int c, char **v)
{
	if(c == 2)
		first_word(v[1]);
	write(1, "\n", 1);
}