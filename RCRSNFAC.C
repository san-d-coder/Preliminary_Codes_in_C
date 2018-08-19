//factorial using recursion function
int fact(int);
void main()
{
int n;
clrscr();
printf("\n\t\t enter a number: ");
scanf("%d",&n);
printf("\n\t\t factorial of %d is %d",n,fact(n));
printf("\n\n\t\t%c %c %c %c %c %c %c %c %c",1,2,3,4,5,6,11,12,15);
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}
