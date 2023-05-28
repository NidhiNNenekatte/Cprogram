#include<stdio.h>
int main(){
        int a;
        printf("\n Enter a number:");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("\nSunday");
            break;

        case 2:
            printf("\nMonday");
            break;

        case 3:
            printf("\nTuesday");
            break;

        case 4:
            printf("\nWednesday");
            break;

        case 5:
            printf("\nThursday");
            break;

        case 6:
            printf("\nFriday");
            break;

        case 7:
            printf("\nSaturday");
            break;

        default:
            printf("\n input error,number 1-7 only");
            break;
        }
}
