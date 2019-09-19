#include <stdio.h>


int str_len(char* chars);


void store_data(char **bank, char *buf, int len, int rank)
{
	// buf[len] = 0;
  int index ;

  index = 0;
  while (buf[index] != '\0')
  {
  	// bank[rank][index] = buf[index];
  	printf("%c",buf[index]);
  	//printf("%d",bank[rank][index]);
  	// printf("%d",bank[rank][index]);
  	index++;
  }
  printf("\n");
	
}
