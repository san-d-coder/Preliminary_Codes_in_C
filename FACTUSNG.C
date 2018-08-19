//factorial using recursion..........
void fact(int);
void main()
{
 int n;
 clrscr();
 printf("\n\t\t enter a positive number: ");
 scanf("%d",&n);
 fact(n);
 //printf("\n\t\t factorial of %d is %d",n,s);
 getch();
 }
 void fact(int i)
 {
 int s=1,n;
 for(n=i;n>=0;n--)
 {
 if(n==0)
 printf("\n\t\t factorial of %d is %d",i,s);
 else
 s=s*n;
 }
 //printf("\n\t\t factorial of %d is %d",i,s);
 }

