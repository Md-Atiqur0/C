#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to check even or odd : ");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("\n%d is even.\n\n", num);
    else
        printf("\n%d is odd.\n\n",num);
}
