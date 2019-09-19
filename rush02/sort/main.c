
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

// util
int power(int nb, int pow);
int str_len(char* chars);

// spliter
void spliter(char *char_num, char *digit);

// dico
void store_data(char **bank, char *buf, int len, int rank);




typedef struct struct_dico struct_dico;

struct struct_dico
{
	int digit;
	char *strin;
	char *strout;
	struct_dico *pn;
};

typedef struct dico_list dico_list;
struct dico_list
{
	struct_dico *pn;
};



int main(int num, char **arg)
{
	char *digit;
	digit = malloc(sizeof(char)*42);

	spliter(arg[1], digit);

	int index = str_len(digit) -1;
	int index_local = 0;
	int index_famille = 0;
	int len = str_len(digit) -1;
	//int index_famille = str_len(digit)/3 + 1;
	while(index >= 0)
	{
		if((len - index)%3 == 0)
		{
			index_famille ++;
			index_local = 0;
		}
		//printf("index: %i\n",index);
    //printf("index: %i famille %i local %i\n",index, index_famille, index_local);

		printf("digit: %c famille %i local %i\n",digit[index], index_famille, index_local);
		// printf("%lu\n", digit[index] * power(10, len-1));
		index--;
		index_local++;
	}
	return(0);
}












/*
int main(int num, char **arg)
{
  (void)num;
	long digit[42];
	spliter(arg[1], digit);


	dico_list dico;
	int id_dico;
	char buf[50];
	int len_info;
	int sr;
	int rank;
  
  rank = 0;
	len_info = 0;
	dico.pn = (struct_dico *)malloc(sizeof(struct_dico));
	dico.pn -> digit = 0;
	id_dico = open("numbers.dict", O_RDONLY);

  char **bank;
	// char bank[50][50];
	bank = malloc(sizeof(char)*50*50);


	while (read(id_dico, &buf[len_info], 1) != 0)
	{
		// printf("len_info: %i rank %i\n", len_info, rank);
		if (buf[len_info] == '\n')
		{
			store_data(bank, buf, len_info, rank);
			len_info = 0;
			rank++;
		}
		else
			len_info++;
	}
	close(id_dico);



	while ((sr = read(id_dico, &buf[len_info], 1)) != 0)
	{
		printf("sread: %i\n", sr);
		if (buf[len_info] == '\n')
		{
			// store_data(bank, buf, len_info, rank);
			// range_line(buf, len_info);
			len_info = 0;
			rank++;
		}
		else 
			len_info += sr;
	}
	close(id_dico);

  
  


	int index = 0;
	int len = str_len(arg[1]);
  while (index < str_len(arg[1]))
  {
  	long value = digit[index];
  	read(id, &buf[value], 1);
  	// printf("%lu %d\n", value, buf[value]);
  	// printf("%lu\n", value * power(10, len-1));
  	index++;
  	len--;
  }

	return(0);
}
*/