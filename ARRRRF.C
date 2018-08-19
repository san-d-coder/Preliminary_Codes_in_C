void main()
{
int arr[50];
int a,b,n,c,i;
clrscr();
printf("\n\t\t enter range: ");
scanf("%d",&n);
arr[1]=1;
arr[0]=0;
a=arr[0];
b=arr[1];
printf("\n\t\t the fibonacci series of range %d is \n\n\t\t  %d   %d  ",n,a,b);
c=a+b;
for(i=2;c<n;i++)
{
arr[i]=c;
a=b;
b=c;
c=a+b;
printf(" %d ",arr[i]);
}
getch();
}