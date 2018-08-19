//using second array...............


void main()
{
int a[50],b[50];
int i,n,l,j;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the element of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);

//using while loop..............

/*
l=n-1;
j=0;
while(l>=0)
{
b[j]=a[l];
l--;
j++;
}
*/

//using for loop................


for(j=0,l=n-1;l>=0;j++,l--)
{
b[j]=a[l];
}

printf("\n\n\t\t the element of the array after reverse:  ");
for(i=0;i<n;i++)
printf(" %d ",b[i]);
getch();
}