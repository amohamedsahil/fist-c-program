#include<stdio.h>
int main()
{
    int current_amount=10000;
    int widrowamount;
    printf("enter a widrow amount :-");
    scanf("%d",&widrowamount);
    current_amount-=widrowamount;
    printf("current_amount %d",current_amount);
} 