#include<stdio.h>
 int a[100];int f=0;
int bin(int low,int high, int mid,int s)
{
  if(low<=highc)
  {
    if(s==a[mid])
      { printf("\nThe element is present in %d position",mid+1);
       f=1;
      } 
    if (s>a[mid])
      {
        low=mid+1;mid=(low+high)/2;
        bin(low,high,mid,s);
      }
    else if(s<a[mid])
      {
        high=mid-1;mid=(low+high)/2;
        bin(low,high,mid,s);
      }  
  }
  else 
  printf("\nItem is not in the list");
  return 0;
}
void main()
{
  int n,s,mid,low,high;
  printf("\nEnter the number of number :");
  scanf("%d",&n);
  printf("\nEnter the elements :");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter the element to be searched :");
  scanf("%d",&s);
  low=0;high=n-1;mid=(low+high)/2;
  bin(low,high,mid,s);
  
}
