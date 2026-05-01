#include<unistd.h>
void put_nbr(int n)
{
	char *decimal;

	decimal = "0123456789";
	if(n > 9)
		put_nbr(n / 10);
	write(1, &decimal[n % 10], 1);
}
void fizzbuzz(int len)
{
	int i;

	i = 1;
	while(i < len)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
}
int main(void)
{
	fizzbuzz(100);
}