void main()
{
int i,prime,upper,lower,n;
clrscr();
printf("\n\t enter lowere and upper limit: ");
scanf("%d %d",&lower,&upper);
printf("\n\t prime numbers between %d and %d are: ",lower,upper);
for(n=lower+1;n<upper;n++)
{
prime=1;
for(i=2;i<n;i++)
if(n%i==0)
{
prime=0;
break;
}
if(prime)
printf(" %d ",n);
}
getch();
}