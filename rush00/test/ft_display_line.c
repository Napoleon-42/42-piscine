void	ft_putchar(char c);

void	ft_disp_line( char a, char b, char c, int size)
{
	int i;

	i = 0;
	while ( i < size)
	{
		if (i == 0 )
			ft_putchar(a);
		else if(i == (size - 1))
			ft_putchar(b);
		else
			ft_putchar(c);
		i++;
	}
}
