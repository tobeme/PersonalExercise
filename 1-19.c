#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
  char c,a[200];

  int i=0;
  while((c=getchar())!=EOF&&i<200)
  {
    if(c!='\n')
      a[i++]=c;
    else
    {
      a[i]='\0';
      i=0;
      reverse(a);
      printf("%s\n",a);
    }
  }

  return 0;
}

void reverse(char *s)
{
  int len;
  len=strlen(s);
  char temp;
  int i;
  for(i=0;i<(len-1)/2;i++)
  {

    temp=s[i];
    s[i]=s[len-i-1];
    s[len-i-1]=temp;
  }
}
