#include<string.h>
void main()
{
int i,n=0,t=0,s=0;
char a[10],b[10];
clrscr();
printf("\n\t\t enter any name: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
t++;
n=t;
for(i=0;a[i]!='\0';i++)
{
b[t-1]=a[i];
t--;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
s=s+1;
}
if(n==s)
printf("\n\t\t the name %s is palindrom",a);
else
printf("\n\t\t the name %s is not palindrom",a);
getch();
}