int main()
{
 int a[5]={0,1,15,20,25};
 int i,j,m;
 clrscr();
 i=++a[1];
 j=a[1]++;
 m=a[i++];
printf("%d %d %d",i,j,m);
 return 0;
}