void main()
{
int n,i;
float s=1.0;
clrscr();
printf("\n\t\t enter a number: ");
scanf("%d",&n);
if(n<0)
{
exit(1);
}
else
{
for(i=n;i>=0;i--)
{
if(i==0)
printf("\n\t\t factorial of %d is %f ",n,s);
else
s=s*i;
}
getch();
}
}
