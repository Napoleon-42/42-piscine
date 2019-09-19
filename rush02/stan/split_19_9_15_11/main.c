
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
char *spliter_family(char *digit);


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
		num_digit = str_len(arg[2]) + 1;
		digit = malloc(sizeof(char) * num_digit);
		spliter(arg[2], digit);
	}
		
	

	
	
	spliter_family(digit);
	return(0);
}



