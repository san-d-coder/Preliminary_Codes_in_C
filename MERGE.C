void main()
{
int a1[100],a2[100],a3[200];
int t,i,j,k,n1,n2;
clrscr();
printf("\n\t\t enter the range for 1st array: ");
scanf("%d",&n1);
printf("\n\t\t enter element for 1st array: ");
for(i=0;i<n1;i++)
{
scanf("%d",&a1[i]);
printf("\n\t\t\t\t\t\t");
}
printf("\n\t\t element of the 1st array before sorting:\n\t\t");
for(i=0;i<n1;i++)
printf(" %d ",a1[i]);
for(i=0;i<n1-1;i++)
{
for(j=0;j<n1-1-i;j++)
{
if(a1[j]>a1[j+1])
{
t=a1[j+1];
a1[j+1]=a1[j];
a1[j]=t;
}
}
}
printf("\n\t\t after sorting the elements of 1st array:\n\t\t");
for(i=0;i<n1;i++)
printf(" %d ",a1[i]);
printf("\n\n\t\t enter the range for second array: ");
scanf("%d",&n2);
printf("\n\n\t\t enter the element of the second array: ");
for(i=0;i<n2;i++)
{
scanf("%d",&a2[i]);
printf("\n\t\t\t\t\t\t");
}
printf("\n\t\t elements of the 2nd array before sorting:\n\t\t");
for(i=0;i<n2;i++)
{
printf(" %d ",a2[i]);
}
for(i=0;i<n2-1;i++)
{
for(j=0;j<n2-1-i;j++)
{
if(a2[j]>a2[j+1])
{
t=a2[j+1];
a2[j+1]=a2[j];
a2[j]=t;
}
}
}
printf("\n\t\t elements of the 2nd array after sorting: ");
for(i=0;i<n2;i++)
{
printf(" %d ",a2[i]);
}
//printf("\n\t\t click enter for proceed....");
i=j=k=0;
for(;i<n1&&j<n2;)
{
if(a1[i]>a2[j])
{
a3[k++]=a2[j++];
}
else
{
a3[k++]=a1[i++];
}
}
for(;i<n1;)
{
a3[k++]=a1[i++];
}
for(;j<n2;)
{
a3[k++]=a2[j++];
}
printf("\n\t\t elements of two array after sortinng: ");
for(i=0;i<(n1+n2);i++)
{
printf(" %d ",a3[i]);
}
getch();
}