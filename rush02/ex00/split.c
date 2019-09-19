
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int str_len(char* chars);
void  ft_find_print(char *str, char *dict);

void spliter(char *char_num, char *digit)
{
  char c;
  int index;

  index = 0;
  while(index < str_len(char_num)) 
  {
  	c = char_num[index];
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

char *set_deci(int ratio, char unit)
{
  char *result;
  result = malloc(sizeof(char) * 2);
  result[0] = ratio + '1';
  result[1] = unit;
  result[2] = '\0';
  return result;
}


void build_deci(char *digit, int index, int index_local, char *dico)
{
  int ratio;

  ratio = digit[index] - '0' - 1;
  if(index_local == 1 && digit[index] != '0')
  {
    if(ratio > 0)
    {
      // set_deci(ratio, '0');
      ft_find_print(set_deci(ratio, '0'), dico);
      write(1, " ", 1);
    }
    else
    {
      // set_deci(ratio, digit[index + 1]);
      ft_find_print(set_deci(ratio, digit[index + 1]), dico);
      write(1, " ", 1);
    }
  }
}









// ORIGINAL

void spliter_family(char *digit, int language, int num_digit, char *dico)
{
  int index;
  int index_local;
  int index_family;

  index = str_len(digit) -1;
  index_local = 0;
  index_family = -1;
  while(index >= 0)
  // while(index >= 0)
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
      ft_find_print(set_family(index_family),dico);
      write(1, " ", 1);
    }

    // unit
    if(index_local == 0)
    {
      if(digit[index-1] - '0' -1 > 0)
      {
        ft_find_print(set_unit(digit[index]),dico);
        write(1, " ", 1);
      }
    }


    // centi
    if(index_local == 2 && digit[index] != '0')
    {
      ft_find_print(set_centi(),dico);
      write(1, " ", 1);
      ft_find_print(set_unit(digit[index]),dico);
      write(1, " ", 1);
    }

    // deci
    build_deci(digit, index, index_local, dico);

    // global index
    index--;
    index_local++;
  }
}



