#include<stdio.h>
void main()
{
int a,b,result,op;
printf("enter two number:");
scanf("%d %d",&a,&b);
printf("\n enter your option:");
scanf("%d",&op);
switch(op)
 {
  case 1:
       result=a+b;
       printf("\n addition:%d",result);
       break;
  case 2:
       result=a-b;
       printf("\n subtraction:%d",result);
       break;
  case 3:
       result=a*b;
       printf("\n multiplication:%d",result);
       break;
  case 4:
       result=a/b;
       printf("\n division:%d",result);
       break;
  case 5:
       result=a%b;
       printf("\n modulus:%d",result);
       break;
  default:
       printf("\n INVALID CHOICE");
       break;
 }
}
