#include<unistd.h>
void search_and_replace(char *str, char search, char remplace)
{
	int i;

	while(str[i] != '\0')
	{
		if(str[i] == search)
			write(1, &remplace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}
int main(int c, char **v)
{
	if(c == 4)
		search_and_replace(v[1], v[2][0],v[3][0]);
	write(1, "\n", 1);
	return(0);
}