//fibonacci series using function...........
int fib(int);
void main()
{
int n;
clrscr();
printf("\n\t\t enter range: ");
scanf("%d",&n);
printf("\n\t\t the fibonacci series is %d ",fib(n));
getch();
}
int fib(int n)
{
if(n==0||n==1)
{
return n;
}
else
{
return (fib(n-1)+fib(n-2));
}
}