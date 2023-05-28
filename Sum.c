#include<stdio.h>
void main(){
    int num1,num2,sum,sub,div,mult;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    div=num1/num2;
    mult=num1*num2;
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d-%d=%d\n",num1,num2,sub);
    printf("%d/%d=%d\n",num1,num2,div);
    printf("%d*%d=%d\n",num1,num2,mult);
}
