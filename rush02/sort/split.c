
#include <stdio.h>

int str_len(char* chars);

void spliter(char *char_num, char *digit)
{
  char c;
  int index;

  index = 0;
  // printf("length%i\n",str_len(char_num));
  while(index < str_len(char_num)) 
  {
  	char c = char_num[index];
  	if(c >= '0' && c <= '9') {
  		digit[index] = c;
  	}
  	index++;
  }
}