long	power(int nb, int pow)
{
	if (pow == 0)
		return (1);
	if (pow > 1)
		return (nb * power(nb, pow - 1));
	else if (pow == 1)
	{
		return (nb);
	}
	else
		return (0);
}


int str_len(char* chars) {
	int index;
	
	index = 0;
	while (chars[index] != '\0') {
		index++;
	}
	return index;
}
