
#include <stdio.h>
#include <stdlib.h>

int str_len(char* chars);
int parse_int(char *chars);

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

char *set_centi()
{
  char *result;
  result = malloc(sizeof(char) * 3);
  result[0] = '1';
  result[1] = '0';
  result[2] = '0';
  result[3] = '\0';
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

void build_centi(char **result, char *digit, int index, int index_local)
{
  if(index_local == 2 && digit[index] != '0')
  {
    printf("%s\n", set_centi());
    printf("%s\n", set_unit(digit[index]));
  }
}


char *set_deci(int ratio, char unit)
{
  char *result;
  result = malloc(sizeof(char) * 2);
  result[0] = ratio + '1';
  result[1] = unit;
  result[2] = '\0';
  return result;
}


void build_deci(char **result, char *digit, int index, int index_local)
{
  int ratio;

  ratio = digit[index] - '0' - 1;
  if(index_local == 1 && digit[index] != '0')
  {
    if(ratio > 0)
      printf("%s\n", set_deci(ratio, '0'));
    else
      printf("%s\n", set_deci(ratio, digit[index + 1]));
  }
}



char **spliter_family(char *digit, int language, int num_digit)
{
  char **result;
  int index;
  int index_local;
  int index_family;
  int len;

  result = malloc(sizeof(char) * num_digit * num_digit); // may be add +1 ????

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

    // printf("index: %i | digit: %c | famille %i | local %i\n", index, digit[index], index_family, index_local);
    // big
    if(index_local == 0 && index_family != 0)
    {
      printf("%s\n", set_family(index_family));
    }
    // unit
    if(index_local == 0)
    {
      printf("%s\n", set_unit(digit[index]));
    }

    build_centi(result, digit, index, index_local);
    build_deci(result, digit, index, index_local);

    index--;
    index_local++;
  }
  return result;
}


