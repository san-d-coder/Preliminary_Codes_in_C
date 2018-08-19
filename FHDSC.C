void main()
{
int i,n,a,s=0;
clrscr();
printf("\n\t\t enter the no. : ");
scanf("%d",&a);
printf("\n\t\tenter the power: ");
scanf("%d",&n);
for(i=1;i<3;i++)
s=a*a+s;
printf("%d",s);
getch();
}
