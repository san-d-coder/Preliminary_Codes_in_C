int gcd(int,int);
void main()
{
int x,y=-1;
printf("\n\t\t insert  no,for exit insert zero ");
while(1)
{
if(x<1)
break;
else
if(y==-1)
y=x;
else
if(x<y)
y=gcd(x,y);
else
y=gcd(y,x);
printf("\n\t\t gcd is %d",y);
getch();
}
}
int gcd(int x,int y)
{
int i;
for(i=x;i>=1;i--)
{
if(x%i==0&&y%i==0)
break;
}
return i;
}
