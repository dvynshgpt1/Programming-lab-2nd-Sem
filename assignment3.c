// Assignment 3
// Program in C to enter the total price of the items boughts in a deparmental store
// and provide a 15% discount if the total price is more than Rs 1000.

#include <stdio.h>
int main()
{
    float Books, Chocolates, Toys, Pen, Clothes;
    float total, AfterDiscount;
    printf("\nYou're most welcome in our departmental store.\nIf total is more than Rs. 1000 ,  15 Percent discount will be given to you\n\n");
    printf("Enter the of Price for each item\n\n");

    printf("Enter the price of Books\n");
    scanf("%f", &Books);
    printf("Enter the price of Chocolates\n");
    scanf("%f", &Chocolates);
    printf("Enter the price of Toys\n");
    scanf("%f", &Toys);
    printf("Enter the price of Pen\n");
    scanf("%f", &Pen);
    printf("Enter the price of Clothes\n");
    scanf("%f", &Clothes);

    total = Books + Chocolates + Toys + Pen + Clothes;

    if (total > 1000)
    {
        printf("\n You have purchased stuff of Rs %.2f , so 15 Percent discount will be given to you\n\n", total);
        AfterDiscount = total - (total * 15) / 100;
        printf("So pay the just Rs %.0f\n", AfterDiscount);
    }
    else
    {
        printf("You have purchased stuff of Rs %.2f ,  so pay Rs %f ", total, total);
    }

    return 0;
}