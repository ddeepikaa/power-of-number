# power-of-number
#include<stdio.h>
int main()
{
  int num=2,power,sum=0,ctr;
  printf("enter the num and power");
  scanf("%d%d",&num,&power);
  for(ctr=0;ctr<power;ctr++)
    sum=sum+(num*power);
    printf("power value:%d",sum);

}
