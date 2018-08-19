int getmax(int a[],int n,int max,int i);
void main()
{
int a[30];
int i,n;
clrscr();
printf("\n\t\t enter the range: ");
scanf("%d",&n);
printf("\n\t\t enter the %d element of the array:",n);
for(i=0;i<n;i++){
printf("\n\t\t\t");
scanf("%d",&a[i]);
}
printf("\n\t\t the element of the array is given below: ");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
printf("\n\t\tmax element of the array is %d",getmax(a,n,0,1));
getch();
}
int getmax(int a[],int n,int max,int i)
{
if(i<n)
{
if(a[max]<a[i])
{
max=i;
}
getmax(a,n,max,i++);
}
return max;
}