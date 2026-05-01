#include<unistd.h>
void rev_print(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		--i;
	}
}
int main(int c, char **v)
{
	if(c == 2)
		rev_print(v[1]);
	write(1, "\n", 1);
	return(0);
}