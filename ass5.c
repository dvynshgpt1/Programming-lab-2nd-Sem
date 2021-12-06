/**************************
Write a program in C to Input two strings: s1 and s2. Concatenate both strings into string s3 such that no vowels of the strings s1 and s2 are in concatenated string s3. 

Concatenation should be done without using string library functions. 

Use scanf("%s",...) for reading string

Subject Line: TEST:D1P15
emailid:firstyearprog@gmail.com

Faculty Number : 20ELB321
Name: DIVYANSHU GUPTA


***************************/
#include <stdio.h>
void printConcatStr(char str[])
{
  printf("ActualOutput:");
  printf("%s", str);
}
int main()
{
  char s1[20], s2[20], s3[50];
  int i, j;
  printf("Enter the value of s1 : ");
  scanf("%s", s1);
  printf("Enter the value of s2 : ");
  scanf("%s", s2);
  for (i = 0, j = 0; s1[i] != '\0'; i++)
  {
    if (!(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'))
    {
      s3[j] = s1[i];
      j++;
    }
  }
  for (i = 0; s2[i] != '\0'; i++)
  {
    if (!(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U'))
    {
      s3[j] = s2[i];
      j++;
    }
  }
  s3[j] = '\0';
  printConcatStr(s3);
  return 0;
}