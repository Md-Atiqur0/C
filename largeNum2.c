#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter 1st number to check large number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number to check large number : ");
    scanf("%d",&num2);

    if(num1 == num2)
        printf("\n%d is equal to %d.\n\n", num1, num2);
    else if(num1 > num2)
        printf("\n%d is large from %d.\n\n",num1, num2);
    else
        printf("\n%d is large from %d.\n\n",num2,num1);
}

