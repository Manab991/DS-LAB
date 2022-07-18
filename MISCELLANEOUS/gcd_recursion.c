#include<stdio.h>
int GCD(int,int);
int main(){
   int num1,num2,result;
   printf("Enter two +ve numbers: \n");
   scanf("%d%d",&num1,&num2);
   result=GCD(num1,num2);
   printf("GCD is %d\n",result);
   return 0;
}
/* Recursive Function*/
int GCD(int a, int b ){
    int res;
   if(a==0)
       res=b;
   else if(b==0)
       res=a;
   else
       res=GCD(b,a%b);
      return res;
}