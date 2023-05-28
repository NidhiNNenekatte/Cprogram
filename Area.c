#include<stdio.h>
int main(){
     int l,b,r,carea,rarea;
     float pi=3.142;
     printf("\n Enter the value of l,b");
     printf("\n Enter the value of r");
     scanf("%d%d%d",&l,&b,&r);
     carea=pi*r*r;
     rarea=l*b;
     printf("\nArea of circle is %d",carea);
     printf("\nArea of rectangle is %d",rarea);
     }
