void fib(int);
void main()
{
int n;
int i=0,j=1;
clrscr();
printf("\n\t\t enter the range of the fibonacci series: ");
scanf("%d",&n);
printf("\n\t\t fibonacci series: ");
printf("  %d  %d  ",i,j);
fib(n);
getch();
}
void fib(int n)
{
static long int sum,first=0,second=1;
int d,i;
i=n;
sum=first+second;
d=i/2;
if(n>d)
{
printf("  %d  ",sum);
sum=first+second;
first=second;
second=sum;
fib(n-1);
}
}