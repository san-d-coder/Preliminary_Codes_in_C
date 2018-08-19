int fact(int n);
void main()
{
int n,t;
clrscr();
printf("\n\t\t enter the number: ");
scanf("%d",&n);
t=n;
printf("\n\t\t factorial of %d is %d",t,fact(n));
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}
