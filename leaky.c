#include<stdio.h>
#define MAX 25
int min(int x,int y)
{
return(x<y)?x:y;
}
int main()
{
int drop=0,a,size,oprt,nsec,count,i=0,inp[MAX];
printf("enter the bucket size: \n");
scanf("%d",&size);
printf("enter operation rate:\n");
scanf("%d",&oprt);
printf("enter simulation rate second:\n");
scanf("%d",&nsec);
for(i=0;i<nsec;i++)
{
printf("enter the packetentering at %d second \t:",i+1);
scanf("%d",&inp[i]);
}
printf("(second):(packet received):(packet sent):(packet left):(packet dropped)\n");
count=0;
for(i=0;i<nsec;i++)
{
count+=inp[1];
if(count>size)
{
drop=count-size;
count=size;
}
printf("%d",i+1);
printf("\t\t %d",inp[i]);
a=min(count,oprt);
printf("\t\t %d",a);
count=count-a;
printf("\t\t %d",count);
printf("\t\t %d\n", drop);
drop=0;
}
for(;count!=0;i++)
{
if(count>size)
{
drop=count-size;
count=size;
}
printf("%d",i+1);
printf("\t\t 0");
a=min(count,oprt);
printf("\t\t %d",a);
count= count-a;
printf("\t\t %d",count);
printf("\t\t %d \n",drop);
}
}
