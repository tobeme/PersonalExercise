#include<stdio.h>

int main()
{
	int word[30][20];
	int c,i,j;

	for(i=0;i<30;i++)
		for(j=0;j<20;j++)
			word[i][j]='\0';

	i=j=0;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
			word[i][j++]=c;
		{
			i++;
			j=0;
		}
	}

	for(j=0;j<20;j++)
	{
		i=0;
		while(word[i++][j]!=' ')
			printf("* ");
		putchar('\n');
	}

	return 0;
}
