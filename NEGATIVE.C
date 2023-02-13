#include<stdio.h>
#include<conio.h>
int main()
{
 int a[1000],i,n;
 printf("enter size of the array:");
 scanf("%d", &n);
 printf("enter elements in array:");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("\nA11 negative elementsin array:");
 for(i=0; i<n; i++)
 {
   if(a[i] < 0)
   {
    printf("%d\t", a[i]);
   }
 }
 return 0;
}

