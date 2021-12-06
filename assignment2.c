// Assignment 2
// Program for returning sum of five digit number entered without using loop
// same progrrame is below by using while loop

// #include <stdio.h>
// int main ()
// {
//     int n , r , sum=0;
//    printf("enter a 5 digit number\n");
//    scanf("%d"  ,&n);
//    r = n % 10;
//    sum= sum+r;
//    n=n/10;
//     r = n % 10;
//    sum= sum+r;
//     n=n/10;
//      r = n % 10;
//    sum= sum+r;
//     n=n/10;
//      r = n % 10;
//    sum= sum+r;
//     n=n/10;
//     r = n % 10;
//    sum= sum+r;
//    printf("the sum of digits is %d" , sum);
//     return 0 ; 
// }

//  by using while loop

#include <stdio.h>
int main ()
{
  int n , r , sum=0;
  printf("enter a  five digit number\n");
  scanf("%d", &n);
   while (n!=0)
   { 
      r = n % 10;
      sum= sum+r;
      n=n/10;
   }
   
   printf("the sum of digits is %d" , sum);
  return 0 ; 
}
