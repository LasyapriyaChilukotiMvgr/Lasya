#include<stdio.h>
int main()
{
int p,x,k,j;
scanf("%d %d",&x,&p);
k=x;
if((0<=x<=10000)&&(1<=p<=100))
{
while(k>1)
{
int j=p*k/100;
k=k-j;
printf("%d\n",k);
x+=k;
}
printf("%d",x);
}
return 0;
}

