void main()
{
int i,k,j,n;
clrscr();
printf("\n\t\t with how many stars u want 2 start?: ");
scanf("%d",&n);
/*for(i=0;i<n;i++)
{
printf("\n");
for(k=0;k<i;k++)
{
printf("  ");
}
for(j=i;j<n;j++)
{
printf(" * ");
}*/
for(i=0;i<n;i++)
{
printf("\n");
for(k=n;k>i+1;k--)
{
printf("  ");
}
for(j=0;j<=i;j++)
{
printf(" * ");
}
}
getch();
}
