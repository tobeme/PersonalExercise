#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int GetLine(char *line,int maxline);
void Copy(char *to,char *from);


int main()
{
  char (*a)[MAXLINE],line[MAXLINE];
  int len,i;
  i=0;
  while((len=GetLine(line,MAXLINE))>0)
  {
    if(len>80)
      Copy(a[i++],line);
  }
  i--;
  while(i>=0)
    printf("%s",a[i--]);
  return 0;
}

int GetLine(char *s,int lim)
{
  int c,i;

  for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
    s[i]=c;
  if(c=='\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  return i;
}

void Copy(char *to,char *from)
{
  int i;

  i=0;
  while((to[i]=from[i])!='\0')
  {
    ++i;
  }
}
