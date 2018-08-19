#include<string.h>
void main()
{
char s[200];
int i,a=1,c=0,d=1;
clrscr();
printf("\n\t\t enter ur name: ");
gets(s);
for(i=0;s[i]!='\0';i++)
{
c=i+1;
if(s[i]==' ')
++d;
if(s[i]=='\n')
++a;
}
printf("\n\t\t total character = %d",c);
printf("\n\t\t total word = %d",d);
printf("\n\t\t total line = %d",a);
getch();
}