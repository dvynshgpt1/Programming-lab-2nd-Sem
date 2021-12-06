/**************************
Write a program in C to Input two strings: s1 and s2. Concatenate both strings 
into string s3 such that no vowels of the strings s1 and s2 are in c
oncatenated string s3. 

Concatenation should be done without using string library functions. 

Use scanf("%s",...) for reading string

Subject Line: TEST:D1P15
emailid:firstyearprog@gmail.com

Faculty Number:20XYZ123
Name:FIRST MIDDLE LAST


***************************/
#include <stdio.h>

void printConcatStr(char str[]) {
    printf("ActualOutput:");
    printf("%s",str);
}
/* Do not modify this function, use it to display the output*/

int main()
{
 char s1[20], s2[20], s3[50];
 int i,j;

printf("enter two string\n");
scanf("%s" ,s1);
scanf("%s" ,s2);

printf("the concatenation of s1 and s2 to s3 without vowels is %s %s" , s1,s2);


 /* 
    
       $$TO-DO$$
       Steps:

       1. Initialize s1 and s2 using scanf("%s",...) 
       2. For each character of s1,
          (a) If the character is a consonant, append it to S3
          (b) If the character is a vowel, do not append to s3
          (c) Repeat steps 2(a) and 2(b) for each character of S1
       3. For each character of s2,
          (a) If the character is a consonant, append it to S3
          (b) If the character is a vowel, do not append to s3
          (c) Repeat steps 3(a) and 3(b) for each character of S2

       4. Print concatenated string s3 using the printConcatStr function
 */
 
 
 return 0;
}