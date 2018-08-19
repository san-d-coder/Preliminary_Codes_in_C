void main()
{
int a=0,b=1,n,c;
clrscr();
printf("\n\t\t enter range: ");
scanf("%d",&n);
printf("\n\t\t the fibonacci series of range %d is \n\n\t\t  %d   %d  ",n,a,b);
c=a+b;
while(c<n)
{
printf("  %d  ",c);
a=b;
b=c;
c=a+b;
}
getch();
}