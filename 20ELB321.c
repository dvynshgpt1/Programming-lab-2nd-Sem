 /******************************************************************************

Write a C Program to calculate the sum of diagonal elements of a matrix.

Subject Line: TEST:D1E88
emailid:firstyearprog@gmail.com

Faculty Number:20ELB321
Name:DIVYANSHU GUPTA

*******************************************************************************/
#include <stdio.h>

void outputSum(int sum);

/*It is a function to display output, you will be using this function to print sum of the diagonal elements*/

int main()
{
    int i,j,row,col,sum=0, mat[10][10];
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&row,&col);          
    printf("\nEnter the elements of the matrix: \n");
    for(i=0;i<row;i++)   
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(row==col)
    {
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    }
    else
    {
        sum=0;
    }
    /* 
    
       $$TO-DO$$
       Steps:

       1. Get the size of a matrix from a user (no. of rows in r and no. of columns in c)
       2. Initialize input[r][c] using loop and scanf function
       3. Calculate the sum of elements of square diagonal matrix
       4. Print the sum using outputSum function. If the matrix is not square matrix then 0 (zero) will be printed as sum to indicate non-square matrix.  		  Otherwise, print the sum of mat[0][0] + mat[1][1] + ... + mat[r][c].
       Ex. for square matrix mat[2][2] = {1, 2, 3, 4} sum will be 5
           for non-square matrix mat[2][3] = {1, 2, 3, 4, 5, 6} sum will be 0
    */
       
    outputSum(sum);

}

void outputSum(int sum)
{
  printf("\nActualOutput:");
  printf("%d", sum);   
}