#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

typedef struct dictatom dictatom;

struct dictatom
{
	int digit;
	char *strin;
	char *strout;
	dictatom *pn;
};

typedef struct listatom listatom;
struct listatom
{
	dictatom *pn;
};

void range_line(char *buf, int n)
{
	buf[n] = 0;
	printf("%s\n",buf);
}
	
int main(void)
{
	listatom first;
	int id;
	char buf[256];
	int sr;
	int line=0;
	
	first.pn = (dictatom *)malloc(sizeof(dictatom));
	first.pn->digit = 0;
	printf("%d",first.pn->digit);
	id = open("numbers.dict",O_RDONLY);
	while((sr=read(id,&buf[line],1))!=0)
	{
		if(buf[line]=='\n')
		{
			range_line(buf,line);
			line = 0;
		}
		else line+=sr;
	}
	close(id);
	return 0;
}
