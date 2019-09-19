
int str_len(char* chars);

void spliter(char *char_num, long *digit)
{
  char c;
  int index;

  index = 0;
  while(index < str_len(char_num)) 
  {
  	char c = char_num[index];
  	digit[index] = c - '0';
  	index++;
  }
}