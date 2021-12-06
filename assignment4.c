/**************************

This program is to find average of three numbers.

Subject Line: TEST:D1P11
emailid:firstyearprog@gmail.com

FACULTY NUMBER: 20ELB321
Name: DIVYANSHU GUPTA 

***************************/

#include <stdio.h>

int input(int order);
void outputAvg(float avg);


int main()
{
    int a, b, c;
    float avg;
    /* Enter three integer numbers */
    a = input(1);
    b = input(2);
    c = input(3);
   
    /* Write your code here for calculating average of a, b and c */
    
    avg = (float) (a+b+c)/3;
    
    outputAvg(avg);
    return 0;
}


int input(int order)
{
    int ip=0;
    scanf("%d",&ip);
    return ip;
}

void outputAvg(float avg)
{
    printf("%0.1f",avg);
}