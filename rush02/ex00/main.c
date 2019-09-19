
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>


// util
int str_len(char* chars);

// spliter
void spliter(char *char_num, char *digit);
void spliter_family(char *digit, int language, int num_digit, char *dico);


// dico
char	*ft_dic_to_str(char *file_name);

//
void	ft_parsing(char **strs, char *file, int size);

char *load_dico()
{
	int i;

	i = 0;
	char *filename = "numbers.dict";
	return ft_dic_to_str(filename);
}
int main(int num, char **arg)
{
	char *digit;
	int num_digit;

	num_digit = 0;
	if(num < 3)
	{
		num_digit = str_len(arg[1]) + 1;
		digit = malloc(sizeof(char) * num_digit);
		spliter(arg[1], digit);
	}
	else
	{
		num_digit = str_len(arg[2]);
		digit = malloc(sizeof(char) * num_digit);
		spliter(arg[2], digit);
	}

	
	int language = 0 ; // en
	// int language = 1 ; // fr
	spliter_family(digit, language, num_digit, load_dico());


	return(0);
}






