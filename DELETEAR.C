void main()
{
int a[50];
int i,n,pos;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the element of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\t\t enter the position to be deleted: ");
scanf("%d",&pos);
for(i=pos;i<n;i++)
a[i-1]=a[i];
a[i-1]=0;
printf("\n\t\t after deletion the elements are: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}