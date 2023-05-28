#include<stdio.h>
int main(){
        int a;
        printf("\n Enter a number:");
        scanf("%d",&a);
        if(a==1)
            printf("\nSunday");
        else if(a==2)
            printf("\nMonday");
        else if(a==3)
            printf("\nTuesday");
        else if(a==4)
            printf("\nWednesday");
        else if(a==5)
            printf("\nThursday");
        else if(a==6)
            printf("\nFriday");
        else if(a==7)
            printf("\nSaturday");
        else
            printf("\n input error,number 1-7 only");
        }
