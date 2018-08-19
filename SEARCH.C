void main()
{
int a[50];
int i,n,key,s;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the element of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\t\t enter the element to be found: ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
break;
}
s=i+1;
if(i==n)
printf("\n\t\t the element %d is not found",key);
else
printf("\n\t\t %d found at %d position",key,s);
getch();
}