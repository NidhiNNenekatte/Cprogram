#include<stdio.h>
int main(){
        int s1,s2,s3,sum;
        float avg;
        printf("\n Enter marks for 3 subjects:");
        scanf("%d%d%d",&s1,&s2,&s3);
        sum=s1+s2+s3;
        avg=sum/3;
        printf("\n Total marks=%d",sum);
        printf("\n avg=%f",avg);
         }
