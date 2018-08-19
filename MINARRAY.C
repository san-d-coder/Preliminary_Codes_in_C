void main()
{
int a[50];
int i,n,s=0;
clrscr();
printf("\n\t\t enter range: ");
scanf("%d",&n);
printf("\n\t\t enter element: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t elements are given below: ");
for(i=0;i<n;i++)
printf("  %d  ",a[i]);
for(i=1;i<n;i++)
{
if(a[s]>a[i])
s=i;
}
printf("\n\n\t\t the min element of the array is: %d ",a[s]);
getch();
}
