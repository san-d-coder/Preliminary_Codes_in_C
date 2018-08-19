void main()
{
int i,j,k,n,p=0;
clrscr();
printf("\n\t\t enter the no of lines: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("\n");
 for(k=n-i;k>0;k--)
 {
 printf(" ");
 }
 for(j=0;j<i;j++)
 printf(" %d",++p);
 }
 getch();
 }