#include<stdio.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
	int nspace,ntab,nl;
	char c;

	nspace=ntab=nl=0;
	while((c=getchar())!=EOF)
	{
		switch(c)
		{
		case SPACE: nspace++;break;
		case TAB: ntab++;break;
		case NEWLINE: nl++;break;
		}
	}

	printf("%d %d %d\n",nspace,ntab,nl);

	return 0;
}
