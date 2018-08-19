int upper(int n,char c)
{
int i;
for(i=65;i<92;i++)
{
if(n==i)
{
printf("\n\t\t%c is a UPPER CASE LETTER ",c);
return 0;
}
}
}

int lower(int n,char c)
{
int i;
for(i=97;i<124;i++)
{
if(n==i)
{
printf("\n\t\t%c is a LOWER CASE LETTER ",c);
return 0;
}
}
}
void main()
{
int n,i,s;
char c;
clrscr();
printf("\n\t\t enter any character: ");
scanf("%c",&c);
n=c;
printf("\n\t\t%d ",n);
n>91?lower(n,c):upper(n,c);
printf("\n\t\t%c is a SPECIAL CHARACTER ",c);
//s:getch();
}
