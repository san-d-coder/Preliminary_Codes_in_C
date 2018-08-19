void main()
{
int n,r,i,j,t,k;
int a[50],b[50];
clrscr();
printf("\n\t\t enter any decimal no. : ");
scanf("%d",&n);
k=n;
i=0;
while(n>0)
{
r=n%2;
n=n/2;
a[i]=r;
i++;
}
t=i;
for(j=0,i=t-1;i>=0;j++,i--)
{
b[j]=a[i];
}
printf("\n\t\t the equivalent binary of the decimal no %d is: ",k);
for(i=0;i<t;i++)
printf(" %d ",b[i]);
getch();
}
