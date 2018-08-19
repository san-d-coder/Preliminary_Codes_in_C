void add(int,int);
void main()
{
int a,b;
clrscr();
printf("\n\t\tenter 2 values: ");
scanf("%d%d",&a,&b);
add(a,b);
getch();
}
void add(int a,int b)
{
int s;
s=a+b;
printf("\n\t\t the sum of %d and %d is %d",a,b,s);
}