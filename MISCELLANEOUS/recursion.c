#include<stdio.h>
int fac(int);
int main() {
    int num,m;
    printf("Enter the number: ");
    scanf("%d",&num);
    m=fac(num);
    printf("%d! = %d",num,m);
    return 0;
}

int fac(int n) {
    int result;
    if (n>=1)
    result=n*fac(n-1);
    else
    result =1;
    return result;
}
