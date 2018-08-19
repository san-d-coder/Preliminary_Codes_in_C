void main()
{
int x,y,z;
clrscr();
for(x=y=0;x<10;x++,y+=2)
{
if((y-x)<=2)
{
printf("\n \n %d",(z=y-x));
getch();
}
else
{
z++;
printf("\n\n\n %d",x);
getch();
}
}
}
