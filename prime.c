#include<stdio.h>

void main() {
  int i,a,n,s,r=0,count=0;
   printf("Enter any  number:");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
       if((a%i)==0)
       count++;
   }
   if(count==0)
   {
   printf("it is true");
   printf("\n");
   }
   else
   {
       printf("it is false");
   }
  
}
