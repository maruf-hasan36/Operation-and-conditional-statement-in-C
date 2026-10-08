#include<stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if (money >= 100)
    {
        printf("Ami picnic a jabo");
    }
    else if (money >=50)
    {
        printf("Ami vat kahabo");
    }
    else if (money >=16)
    {
        printf("Ami chips khabo");
    }
    
    else
    {
        printf("Ami kisu e khabo na");
    }
    
};