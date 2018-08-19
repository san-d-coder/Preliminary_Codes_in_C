void main()
{
int a[50];
int i,n,pos,data;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the element: ");

//the last element should be '0'......

for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\t\t enter the element and position to be inserted: ");
scanf("%d %d",&data,&pos);
for(i=n-1;i>=pos;i--)
a[i]=a[i-1];
a[i]=data;
printf("\n\t\t after insertion the elements are: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}