
#include <stdio.h>
#include <stdlib.h>

int str_len(char* chars);

void spliter(char *char_num, char *digit)
{
  char c;
  int index;

  index = 0;
  while(index < str_len(char_num)) 
  {
  	char c = char_num[index];
  	if(c >= '0' && c <= '9') {
  		digit[index] = c;
  	}
  	index++;
  }
  digit[index] = '\0';
}


char *set_family(int type)
{
  int num;
  int index;
  char *members;

  num = type * 3 + 1;
  members = malloc(sizeof(char) * num);
  index = 1;
  members[0] = '1';
  while (index < num)
  {
    members[index] = '0';
    index++;
  }
  members[index] = '\0';
  return members;
}

char *set_hundred()
{
  char *result;
  result = malloc(sizeof(char) * 3);
  result[0] = '1';
  result[1] = '0';
  result[2] = '0';
  result[3] = '\0';
  return result;
}

char *set_deci()
{
  char *result;
  result = malloc(sizeof(char) * 2);
  result[0] = '1';
  result[1] = '0';
  result[2] = '\0';
  return result;
}

char *set_unit(char unit)
{
  char *result;
  result = malloc(sizeof(char));
  result[0] = unit;
  result[1] = '\0';
  return result;
}



char **spliter_family(char *digit)
{
  char **result;
  int index;
  int index_local;
  int index_family;
  int len;

  index = str_len(digit) -1;
  index_local = 0;
  index_family = -1;
  while(index >= 0)
  {
    if((str_len(digit) -1 - index) % 3 == 0)
    {
      index_family ++;
      index_local = 0;
    }
    //printf("index: %i\n",index);
    //printf("index: %i famille %i local %i\n",index, index_family, index_local);

    // printf("digit: %c famille %i local %i\n", digit[index], index_family, index_local);
    // big
    if(index_local == 0 && index_family != 0)
    {
      printf("%s\n",set_family(index_family));
    }
        // unit
    if(index_local == 0)
      printf("%s\n",set_unit(digit[index]));
    // hundred
    if(index_local == 2 && digit[index] != '0')
    {
      printf("%s\n",set_hundred());
      printf("%s\n",set_unit(digit[index]));
    }
    // deci
    if(index_local == 1 && digit[index] != '0')
    {
      printf("%s\n",set_deci());
      printf("%s\n",set_unit(digit[index]));
    }


    // printf("%lu\n", digit[index] * power(10, len-1));

    index--;
    index_local++;
  }
  return result;
}


